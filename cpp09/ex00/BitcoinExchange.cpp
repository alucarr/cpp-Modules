#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::~BitcoinExchange() {}

bool BitcoinExchange::isLeapYear(int year) const {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

bool BitcoinExchange::isValidDate(const std::string& date) const {
    if (date.length() != 10 || date[4] != '-' || date[7] != '-')
        return false;

    int year, month, day;
    char dash1, dash2;
    std::istringstream ss(date);
    ss >> year >> dash1 >> month >> dash2 >> day;

    if (ss.fail() || dash1 != '-' || dash2 != '-')
        return false;

    if (month < 1 || month > 12 || day < 1)
        return false;

    int daysInMonth[] = { 31, (isLeapYear(year) ? 29 : 28), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    return day <= daysInMonth[month - 1]; 
}

std::string BitcoinExchange::findClosestDate(const std::string& date) const {
    std::map<std::string, double>::const_iterator it = exchangeRates.lower_bound(date);
    
    if (it == exchangeRates.end() || it->first != date) {
        if (it == exchangeRates.begin()) 
            return "";
    
        --it;
    }
    return it->first;
}

void BitcoinExchange::loadExchangeRates(const std::string& filename) {
    std::ifstream file(filename.c_str());
    if (!file) {
        std::cerr << "Error: Cannot open exchange rate file.\n";
        return;
    }

    std::string line;
    getline(file, line);

    while (getline(file, line)) {
        std::istringstream ss(line);
        std::string date;
        double rate;

        if (getline(ss, date, ',') && ss >> rate) {
            if (isValidDate(date)) 
                exchangeRates[date] = rate;
        }
    }
}

void BitcoinExchange::processInputFile(const std::string& filename) {
    std::ifstream file(filename.c_str());
    if (!file) {
        std::cerr << "Error: Cannot open input file.\n";
        return;
    }

    std::string line;

    if (!getline(file, line)) {
        std::cerr << "Error: Empty input file.\n";
        return;
    }

    if (line != "date | value") {
        std::cerr << "Error: Invalid header format in input file. Expected 'date | value'.\n";
        return;
    }

    while (getline(file, line)) {
        std::istringstream ss(line);
        std::string date;
        double value;
        char separator;

        if (!(ss >> date >> separator >> value) || separator != '|') {
            std::cerr << "Error: Invalid format -> " << line << "\n";
            continue;
        }

        if (!isValidDate(date)) {
            std::cerr << "Error: Invalid date -> " << date << "\n";
            continue;
        }

        if (value < 0 || value > 1000) {
            std::cerr << "Error: Value out of range -> " << value << "\n";
            continue;
        }

        std::string closestDate = findClosestDate(date);
        if (closestDate.empty()) {
            std::cerr << "Error: No exchange rate available for date -> " << date << "\n";
            continue;
        }

        double rate = exchangeRates[closestDate];
        std::cout << date << " => " << value << " BTC = " << (value * rate) << "\n";
    }
}
