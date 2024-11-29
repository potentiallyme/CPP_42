#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){CONSTRUCTOR("ScalarConverter");}

ScalarConverter::~ScalarConverter(){DESTRUCTOR("ScalarConverter");}

ScalarConverter::ScalarConverter(ScalarConverter &other){(void)other;COPY("ScalarConverter");}

ScalarConverter &ScalarConverter::operator=(ScalarConverter &other){(void)other;return *this;}

bool ScalarConverter::isChar(const std::string &tc){
  if (tc.size() == 1)
    return true;
  if (tc.size() == 3){
    if (tc[0] == '\'' && tc[2] == '\'')
      return true;
  }
  return false;
}

void ScalarConverter::toChar(const std::string &tc){
  char c = tc[0];
  if (tc.size() == 3)
  c = tc[1];
int i = static_cast<int>(c);
  float f = static_cast<float>(c);
  double d = static_cast<double>(c);
  if (isprint(c))
    CHAR1
  else
    CHAR0
  INT
  FLOAT
  DOUBLE
}

bool ScalarConverter::isInt(const std::string &tc){(void)tc;return true;}

void ScalarConverter::toInt(const std::string &tc){(void)tc;}

bool ScalarConverter::isFloat(const std::string &tc){(void)tc;return true;}

void ScalarConverter::toFloat(const std::string &tc){(void)tc;}

bool ScalarConverter::isDouble(const std::string &tc){(void)tc;return true;}

void ScalarConverter::toDouble(const std::string &tc){(void)tc;}

bool ScalarConverter::isSpecial(const std::string &tc){(void)tc;return true;}

void ScalarConverter::toSpecial(const std::string &tc){(void)tc;}

void ScalarConverter::convert(const std::string &tc){
  if (isChar(tc))
    toChar(tc);
}
