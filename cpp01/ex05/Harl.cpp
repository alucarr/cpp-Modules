#include "Harl.hpp"

void Harl::debug()
{
    std::cout << MAGENTA << "[DEBUG]   " << DEFAULT;
	std::cout << "I love to get extra bacon for my ";
	std::cout << "7XL-double-cheese-triple-pickle-special-ketchup burger.";
	std::cout << " I just love it!" << std::endl;
}

void Harl::info()
{
    std::cout << GRAY << "[INFO]    " << DEFAULT;
	std::cout << "I cannot believe adding extra bacon cost more money.";
	std::cout << " You don’t put enough! If you did I would not have to ask";
	std::cout << " for it!" << std::endl;
}

void Harl::warning()
{
    std::cout << YELLOW << "[WARNING] " << DEFAULT;
	std::cout << "I think I deserve to have some extra bacon for free.";
	std::cout << " I’ve been coming here for years and you just started ";
	std::cout << "working here last month." << std::endl;
}

void Harl::error()
{
    std::cout << RED << "[ERROR]   " << DEFAULT;
	std::cout << "This is unacceptable, I want to speak to the manager now.";
	std::cout << std::endl;
}
void Harl::complain(std::string input)
{
	std::size_t num = std::string::npos;
	size_t j = -1;
	for (size_t i = 0; i < 4; i++)
	{
		num = cases[i].compare(input);
		if (num == 0)
		{
			j = i;
			break;
		}
	}
	switch (j) {
        case 0:
            funcPtr = &Harl::debug;
            break;
        case 1:
            funcPtr = &Harl::info;
            break;
	    case 2:
            funcPtr = &Harl::warning;
            break;
		case 3:
            funcPtr = &Harl::error;
            break;
        default:
           std::cerr << "you have entered an unknown level" << std::endl;
		   return;
    }
	if (funcPtr != nullptr)
        (this->*funcPtr)();
}


Harl::Harl()
{
	cases[0]=("DEBUG");
	cases[1]=("INFO");
	cases[2]=("WARNING");
	cases[3]=("ERROR");
	return;
}

Harl::~Harl()
{
    std::cout << "HARL died." << std::endl;
}
