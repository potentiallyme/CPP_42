#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include "Macros.hpp"

class ScalarConverter{
  private:
    // CONSTRUCTORS:
    ScalarConverter();
    ScalarConverter(ScalarConverter&);

    // DESTRUCTOR:
    ~ScalarConverter();

    // OPERATOR:
    ScalarConverter &operator=(ScalarConverter&);

    // UTILS:
    static bool isChar(const std::string&);
    static bool isInt(const std::string&);
    static bool isFloat(const std::string&);
    static bool isDouble(const std::string&);
    static bool isSpecial(const std::string&);

    static void toChar(const std::string&);
    static void toInt(const std::string&);
    static void toFloat(const std::string&);
    static void toDouble(const std::string&);
    static void toSpecial(const std::string&);

  public:
    // METHODS:
    static void convert(const std::string &tc);

};

#endif
