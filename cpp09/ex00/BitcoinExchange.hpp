#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <string>

class BitcoinExchange {
private:
    std::map<std::string, double> exchangeRates;

    bool isLeapYear(int year) const;
    bool isValidDate(const std::string& date) const;
    std::string findClosestDate(const std::string& date) const;

public:
    BitcoinExchange();
    ~BitcoinExchange();

    void loadExchangeRates(const std::string& filename);
    void processInputFile(const std::string& filename);
};

#endif
