#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){CONSTRUCTOR("ScalarConverter");}

ScalarConverter::~ScalarConverter(){DESTRUCTOR("ScalarConverter");}

ScalarConverter::ScalarConverter(ScalarConverter &other){(void)other;COPY("ScalarConverter");}

ScalarConverter &ScalarConverter::operator=(ScalarConverter &other){(void)other;return *this;}

bool ScalarConverter::isChar(const std::string &tc){
	if (tc.size() == 3){
		if (tc[0] == '\'' && tc[2] == '\'')
			return true;
	}
	if (tc.size() == 1 && std::isprint(tc[0]))
		return true;
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

bool ScalarConverter::isInt(const std::string &tc){
	if ((!isdigit(tc[0]) && tc[0] != '+' && tc[0] != '-') || ((tc[0] == '+' || tc[0] == '-') && tc.size() == 1))
		return false;
	for (size_t i = 1; i < tc.size(); i++){
		if (!isdigit(tc[i]))
			return false;
	}
	return true;
}

void ScalarConverter::toInt(const std::string &tc){
	std::istringstream ss(tc);
	int i;
	ss >> i;
	if (i < 0 || i > 255)
		CHAROF
	char c = static_cast<char>(i);
	float f = static_cast<float>(i);
	double d = static_cast<double>(i);
	if (isprint(c))
		CHAR1
	else
		CHAR0
	if (i < INT_MIN || i > INT_MAX)
		INTOF
	else
		INT
	FLOAT
	DOUBLE
}

bool ScalarConverter::isFloat(const std::string &tc){
	bool dec = false;
	if ((!isdigit(tc[0]) && tc[0] != '+' && tc[0] != '-') || ((tc[0] == '+' || tc[0] == '-') && tc.size() == 1))
		return false;
	for (size_t i = 1; i < tc.size(); i++){
		if (tc[i] == '.' && dec == false){
			dec = true;
			continue;
		}
		else if (tc[i] == '.' && dec == true)
		return false;
		if (tc[i] == 'f' && i == (tc.size() - 1) && dec == true)
		return true;
		if (!isdigit(tc[i]))
		return false;
	}
	if (!dec || tc[tc.size() - 1] != 'f')
		return false;
	return true;
}

void ScalarConverter::toFloat(const std::string &tc){
	std::istringstream ss(tc);
	size_t len = tc.size() - tc.find('.') - 1;
	float f;
	ss >> f;
	if (f < 0. || f > 255.)
		CHAROF
	char c = static_cast<char>(f);
	int i = static_cast<int>(f);
	double d = static_cast<double>(f);
	if (isprint(c))
		CHAR1
	else
		CHAR0
	if (i < INT_MIN || i > INT_MAX)
		INTOF
	else
		INT
	FLOATS(len)
	DOUBLE
}

bool ScalarConverter::isDouble(const std::string &tc){
	bool dec = false;
	if ((!isdigit(tc[0]) && tc[0] != '+' && tc[0] != '-') || ((tc[0] == '+' || tc[0] == '-') && tc.size() == 1))
		return false;
	for (size_t i = 1; i < tc.size(); i++){
		if (tc[i] == '.' && dec == false){
			dec = true;
			continue;
		}
		else if (tc[i] == '.' && dec == true)
			return false;
		if (!isdigit(tc[i]))
			return false;
	}
	if (!dec)
		return false;
	return true;
}

void ScalarConverter::toDouble(const std::string &tc){
	std::istringstream ss(tc);
	size_t len = tc.size() - tc.find('.') - 1;
	double d;
	ss >> d;
	if (d < 0. || d > 255.)
		CHAROF
	char c = static_cast<char>(d);
	int i = static_cast<int>(d);
	float f = static_cast<float>(d);
	if (isprint(c))
		CHAR1
	else
		CHAR0
	if (i < INT_MIN || i > INT_MAX)
		INTOF
	else
		INT
	FLOATS(len)
	DOUBLE
}

bool ScalarConverter::isSpecial(const std::string &tc){
	std::string specials[] = {"+inf", "+inff", "-inf", "-inff", "nan", "nanf"};
	for (int i = 0; i < 6; i++){
		if (tc == specials[i])
			return true;
	}
	return false;
}

void ScalarConverter::toSpecial(const std::string &tc){
	CHAR0
	std::cout<<YELLOW<<"int: "<<RED<<"cannot be displayed"<<RESET<<std::endl;
	if (tc == "+inf" || tc == "-inf" || tc == "nan"){
		std::cout << YELLOW << "float: " << RESET << tc << "f" << std::endl; 
		std::cout << YELLOW << "double: " << RESET << tc << std::endl; 
	}
	else{
		std::cout << YELLOW << "float: " << RESET << tc << std::endl;
		std::cout << YELLOW << "double: " << RESET << tc.substr(0, tc.size() - 1) << std::endl;
	}

}

void ScalarConverter::convert(const std::string &tc){
	bool (*getType[])(const std::string &tc) = {&isChar, &isInt, &isFloat, &isDouble, &isSpecial};
	void (*toType[])(const std::string &tc) = {&toChar, &toInt, &toFloat, &toDouble, &toSpecial};
	for (int i = 0; i < 5; i++){
		if (getType[i](tc))
			return (toType[i](tc));
	}
	std::cout << RED << "Please input a CHAR / INT / FLOAT / DOUBLE in proper notation" << RESET << std::endl;
}
