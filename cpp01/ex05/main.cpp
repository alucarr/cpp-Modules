#include "Harl.hpp"
int main()
{
    Harl bot;
 
    std::string level;
    while (1)
    {
        std::cout << "enter a level:";
        getline(std::cin, level);
        if (level != "")
            break;  
    }
    bot.complain(level);

    return 0;
}