#include <iostream>
#include "IRepka.h"
#include "command_responsive.h"

std::string command_response(IRepka& repka, char buf[]);

int main()
{

    // SET GET DEL COUNT SAVE_DUMP LOAD_DUMP
    IRepka repka1;
    char buf[100]{""};

    while (true)
    {
        memset(buf, 0, sizeof(buf));
        std::cin.getline(buf, sizeof(buf));
        std::cout << command_response(repka1, buf).c_str() << std::endl;
        
    }

    return 0;
}
