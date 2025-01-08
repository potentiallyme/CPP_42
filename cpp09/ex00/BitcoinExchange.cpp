#include "BitcoinExchange.hpp"

int parseline(int year, int month, int day, double btc, std::string btcRate, std::string line, std::string fulldate){
	size_t pos = line.find("|");
	bool dot = false;
	int max_days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if (line[pos - 1] != ' ' || line[pos + 1] != ' ')
		return (print_error("Invalid line format [YYYY-MM-DD | [VALUE]]"));
	if (line.substr(4,1) != "-" || line.substr(7,1) != "-")
		return (print_error("Invalid date format => " + fulldate));
	for (size_t i = 0; i < btcRate.length(); i++){
		if (btcRate[0] == '.')
			return (print_error("Invalid rate number format"));
		if (btcRate[i] == '.'){
			if (dot == 1)
				return (print_error("Invalid rate format"));
			dot = true;
			continue;
		}
		if (!std::isdigit(btcRate[i]) && dot == true)
			return (print_error("Invalid rate number"));
	}
	if (year < 2009 || year > 2022)
		return (print_error("No data on given year => ", year));
	if (month < 1 || month > 12)
		return (print_error("Invalid month => ", month));
	if (day > max_days[month - 1] || day < 1)
		return (print_error("Invalid day => ", day));
	if (btc < 0.01)
		return (print_error("Not a positive number => ", btc));
	if (btc > 999.99)
		return (print_error("Too large a number => ", btc));
	return 1;
}

int print_error(std::string err){
	std::cerr << RED "Error: " RESET << err << std::endl;
	return 0;
}

int print_error(std::string err, long val){
	std::stringstream ss;
	ss << val;
	std::cerr << RED "Error: " RESET << err << ss.str() << std::endl;
	return 0;
}


void bitcoinExchange(const std::string csvfile, const std::string inputfile){
	std::map<std::string, double> rates;
	std::ifstream file;
	file.open(csvfile.c_str());
	if (!file)
		throw InitException("CSV file can't be opened");
	std::string line, date;
	double val;
	while (std::getline(file, line)){
		std::stringstream ss(line);
		if (std::getline(ss, date, ',') && (ss >> val))
			rates.insert(std::make_pair(date, val));
	}
	file.close();

	file.open(inputfile.c_str());
	if (file.fail())
		throw InitException("Input file can't be opened");

	std::getline(file, line);
	if (line != "date | value")
		throw InitException("Invalid title line");
	while (!file.eof()){
		std::string fulldate;
		std::getline(file, line);
		if (line == "")
			continue;
		if (line.length() < 14){
			print_error("Invalid input => " + line);
			continue;
		}
		int year, month, day = 0;
		std::stringstream y, m, d, b;
		y << line.substr(0,4);
		y >> year;
		m << line.substr(5,2);
		m >> month;
		d << line.substr(8,2);
		d >> day;
		std::string btcRate = line.substr(13, line.find('\0'));
		b << btcRate;
		b >> val;
		fulldate = y.str() + "-" + m.str() + "-" + d.str();
		if (parseline(year, month, day, val, btcRate, line, fulldate)){
			std::map<std::string, double>::iterator it = rates.end();
			it = rates.lower_bound(fulldate);
			if (it != rates.begin() && it->first != fulldate)
				it--;
			std::cout << fulldate << " => " << val << " = " << val * it->second << std::endl;
		}
	}
}
			
