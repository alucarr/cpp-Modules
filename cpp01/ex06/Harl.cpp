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
    std::map<std::string, Harl::StringFunction> stringActions;
    stringActions["debug"] = &Harl::debug;
    stringActions["info"] = &Harl::info;
    stringActions["warning"] = &Harl::warning;
    stringActions["error"] = &Harl::error;
    std::map<std::string, Harl::StringFunction>::iterator it = stringActions.find(input);
    if (it != stringActions.end()) {
            (this->*(it->second))();
        } else {
            std::cout << "The level not found (delusional)" << std::endl;
        }
}

Harl::Harl(/* args */)
{

}

Harl::~Harl()
{
    std::cout << "HARL died." << std::endl;
}
