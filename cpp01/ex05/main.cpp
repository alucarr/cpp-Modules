#include "Harl.hpp"
int main(int ac, char **av)
{
    Harl bot;
 
    std::string level;
	std::cout << "enter a level:";
	std::cin >> level;
    bot.complain(level);

    return 0;
}