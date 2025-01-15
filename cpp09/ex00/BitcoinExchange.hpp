#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP
#include <cstring>
#include <string>

class InitException : public std::exception {
	private:
		char *msg;
	
	public:
		InitException(const char *message){
			msg = new char[std::strlen(message) + 1];
			std::strcpy(msg, message);
		}

		virtual const char * what() const throw(){
			return msg;
		}

		virtual ~InitException() throw(){
			delete[] msg;
		}
};
	
void bitcoinExchange(std::string, std::string);
int parseline(int,int,int,double,std::string,std::string,std::string);
int print_error(std::string);
int print_error(std::string, long);


#endif

