#include "BitcoinExchange.hpp"

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: ./btc <input_file>\n";
        return 1;
    }

    BitcoinExchange btc;
    btc.loadExchangeRates("data.csv");
    btc.processInputFile(argv[1]);

    return 0;
}
