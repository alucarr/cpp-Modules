#include "ScalarConverter.hpp"
#include <iostream>
#include <limits>
#include <cstdlib>
#include <cctype>
#include <sstream>
#include <cmath>

void ScalarConverter::convert(const std::string &literal) {
    convertToChar(literal);
    convertToInt(literal);
    convertToFloat(literal);
    convertToDouble(literal);
}

void ScalarConverter::convertToInt(const std::string &str) {
    char *end;
    float floatValue = std::strtof(str.c_str(), &end);

    if (*end == '\0' || (*end == 'f' && *(end + 1) == '\0')) {
        if (floatValue == static_cast<int>(floatValue) && floatValue >= std::numeric_limits<int>::min() && floatValue <= std::numeric_limits<int>::max()) {
            std::cout << "int: " << static_cast<int>(floatValue) << std::endl;
        } else {
            std::cout << "int: impossible" << std::endl;
        }
    } else {
        std::cout << "int: impossible" << std::endl;
    }
}

void ScalarConverter::convertToFloat(const std::string &str) {
    if (str == "-inff" || str == "+inff" || str == "nanf") {
        std::cout << "float: " << str << std::endl;
        return;
    }

    char *end;
    float value = std::strtof(str.c_str(), &end);

    if (*end == '\0' || (*end == 'f' && *(end + 1) == '\0')) {
        std::cout << "float: " << value << "f" << std::endl;
    } else {
        std::cout << "float: impossible" << std::endl;
    }
}

void ScalarConverter::convertToDouble(const std::string &str) {
    if (str == "-inf" || str == "+inf" || str == "nan") {
        std::cout << "double: " << str << std::endl;
        return;
    }

    char *end;
    double value = std::strtod(str.c_str(), &end);

    if (*end == '\0' || (*end == 'f' && *(end + 1) == '\0')) {
        std::cout << "double: " << value << std::endl;
    } else {
        std::cout << "double: impossible" << std::endl;
    }
}

void ScalarConverter::convertToChar(const std::string &str) {
    if (str.length() == 3 && str[0] == '\'' && str[2] == '\'') {
        char charValue = str[1];
        if (std::isprint(static_cast<unsigned char>(charValue))) {
            std::cout << "char: '" << charValue << "'" << std::endl;
        } else {
            std::cout << "char: Non displayable" << std::endl;
        }
    } else {
        char *end;
        double value = std::strtod(str.c_str(), &end);

        if (*end == '\0' || (*end == 'f' && *(end + 1) == '\0')) {
            if (value >= std::numeric_limits<char>::min() && value <= std::numeric_limits<char>::max()) {
                char charValue = static_cast<char>(value);
                if (std::isprint(static_cast<unsigned char>(charValue))) {
                    std::cout << "char: '" << charValue << "'" << std::endl;
                } else {
                    std::cout << "char: Non displayable" << std::endl;
                }
            } else {
                std::cout << "char: impossible" << std::endl;
            }
        } else {
            std::cout << "char: impossible" << std::endl;
        }
    }
}

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter& other) {}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other) {
    if (this != &other) {
    }
    return *this;
}

ScalarConverter::~ScalarConverter() {}