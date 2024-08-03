#ifndef SCALAR_CONVERTER_HPP
#define SCALAR_CONVERTER_HPP

#include <string>

class ScalarConverter {
public:
    static void convert(const std::string &literal);
    ScalarConverter();
    ScalarConverter(const ScalarConverter& other);
    ScalarConverter& operator=(const ScalarConverter& other);
    ~ScalarConverter();
private:
    static void convertToInt(const std::string &str);
    static void convertToFloat(const std::string &str);
    static void convertToDouble(const std::string &str);
    static void convertToChar(const std::string &str);
};

#endif // SCALAR_CONVERTER_HPP
