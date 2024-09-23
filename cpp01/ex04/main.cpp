#include "replace.hpp"

void err_msg(std::string msg){
	std::cerr << msg << std::endl;
}

void replace_loop(std::ofstream &new_file, std::string s1, std::string s2, std::string buffer){
	size_t pos = buffer.find(s1);
	int next = 0;
	if (pos == std::string::npos)
		new_file << buffer;
	else{
		new_file << buffer.substr(0, pos);
		new_file << s2;
		next = s1.length() + pos;
		replace_loop(new_file, s1, s2, buffer.substr(next));
	}
}

void replace_sed(std::string filename, std::string s1, std::string s2){
	std::ifstream file_copy; file_copy.open(filename.c_str());
	if (!file_copy.is_open() || !file_copy.good())
		return (err_msg("File can't be opened (check permissions or existence)"));
	std::string file_name = filename + ".replace";
	std::ofstream new_file; new_file.open(file_name.c_str());
	if (!new_file.is_open() || !new_file.good())
		return (err_msg("Replace file can't be created."));
	std::string buffer;	
	while (getline(file_copy, buffer))
		replace_loop(new_file, s1, s2, buffer + '\n');
}

int main(int ac, char **av){
	if (ac != 4){
		err_msg("Please input a file name, a string to replace, and the string that replaces it.");
		return (1);
	}
	std::string filename = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];
	replace_sed(filename, s1, s2);
	return (0);
}

