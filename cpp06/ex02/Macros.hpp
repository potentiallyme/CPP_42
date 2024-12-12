#ifndef MACROS_HPP
#define MACROS_HPP

#include <iostream>
#include <fstream>
#include <istream>
#include <ostream>
#include <sstream>
#include <limits>
#include <typeinfo>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <exception>
#include <cctype>
#include <ctime>
#include <unistd.h>

// Class macros
#define CONSTRUCTOR(class_name) \
    std::cout<<PURPLE<<class_name<<GREEN" Default Constructor called"RESET<<std::endl;
#define DESTRUCTOR(class_name) \
    std::cout<<PURPLE<<class_name<<RED" Destructor called"RESET<<std::endl;
#define COPY(class_name) \
    std::cout<<PURPLE<<class_name<<YELLOW" Copy Constructor called"RESET<<std::endl;
#define PARAMETER(class_name) \
    std::cout<<PURPLE<<class_name<<GREEN" Parameterized Constructor called"RESET<<std::endl;

// Main Test macros
#define CONSTRUCT std::cout<<BGREEN"### CONSTRUCTORS ###"RESET<<std::endl;
#define TESTS std::cout<<BBLUE"### TESTS ###"RESET<<std::endl;
#define DESTRUCT std::cout<<BRED"### DESTRUCTORS ###"RESET<<std::endl;
#define NEWLINE std::cout<<std::endl;
#define NNEWLINE std::cout<<std::endl<<std::endl;

//Base colors
#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define YELLOW "\033[0;33m"
#define BLUE "\033[0;34m"
#define PURPLE "\033[0;35m"

//Bold colors
#define BRED "\033[1;31m"
#define BGREEN "\033[1;32m"
#define BYELLOW "\033[1;33m"
#define BBLUE "\033[1;34m"
#define BPURPLE "\033[1;35m"

//Purple highlight colors
#define PPLRED "\033[1;31;45m"
#define PPLGREEN "\033[1;32;45m"
#define PPLYELLOW "\033[1;33;45m"
#define PPLBLUE "\033[1;34;45m"
#define PPLWHITE "\033[1;37;45m"


//To test
#define REDD "\033[0;38;2;255;0;0m"       // Red
#define RED1 "\033[0;38;2;210;10;10m"     // Red
#define ORNG "\033[0;38;2;205;105;0m"     // Orange
#define GOLD "\033[0;38;2;255;215;0m"     // Gold
#define YLLW "\033[0;38;2;255;255;0m"     // Yellow
#define GRNN "\033[0;38;2;0;128;0m"       // Green
#define LIME "\033[0;38;2;0;255;0m"       // Lime 
#define CYAN "\033[0;38;2;0;255;255m"     // Cyan
#define BLEU "\033[0;38;2;80;80;220m"     // Blue
#define INDI "\033[0;38;2;75;0;130m"      // Indigo
#define PURP "\033[0;38;2;238;130;238m"   // Purple
#define MAGN "\033[0;38;2;255;0;255m"     // Magenta
#define PINK "\033[0;38;2;255;192;203m"   // Pink
#define BROW "\033[0;38;2;165;42;42m"     // Brown
#define IVRY "\033[0;38;2;255;255;240m"   // Ivory
#define GRY1 "\033[0;38;2;128;128;128m"   // Grey
#define GRY2 "\033[0;38;2;170;170;170m"   // Grey
#define SLVR "\033[0;38;2;192;192;192m"   // Silver
#define TURQ "\033[0;38;2;64;224;208m"    // Turquoise
#define CORL "\033[0;38;2;255;127;80m"    // Coral
#define SALM "\033[0;38;2;250;128;114m"   // Salmon
#define PLUM "\033[0;38;2;221;160;221m"   // Violet
#define TEAL "\033[0;38;2;0;128;128m"     
#define OLIV "\033[0;38;2;128;128;0m"     // Olive
#define MINT "\033[0;38;2;189;252;201m"   // Mint
#define NAVY "\033[0;38;2;0;0;128m"       // Marine
#define PEAC "\033[0;38;2;175;238;238m"   // Peach
#define LAVN "\033[0;38;2;230;230;250m"   // Lavander
#define EMRD "\033[0;38;2;80;200;120m"    // Emerald
#define RUBY "\033[0;38;2;224;17;95m"     // Ruby
#define CLRALL "\033[2J\033[3J\033[H"     // Clear terminal (delete histo)
#define CLR "\033c"                       // Clear terminal (keep histo)
#define CLRL "\033[2K"                    // Clear line
#define BOLD "\033[1m"
#define ITAL "\033[3m"
#define SOUL "\033[4m"
#define BLKS "\033[5m"
#define BLKF "\033[6m"
#define BARR "\033[9m"
#define RESET "\033[0m"

#endif
