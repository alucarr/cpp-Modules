#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    commands[0] = "ADD";
    commands[1] = "SEARCH";
    commands[2] = "EXIT";
    strings[0] = "First name:";
    strings[1] = "Surname:";
    strings[2] = "Alias:";
    strings[3] = "Number:";
    strings[4] = "Darkest secret:";
    std::cout << "contr başladı" << std::endl;
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::addPerson(int a)
{
    for (size_t i = 0; i < 5; i++)
    {   
		bool flag = 1;
        std::string name;
        std::cout << strings[i] << std::endl;
		while (flag)
		{
			int isfail = 1;
        	getline(std::cin, name);
			for (size_t l = 0; l < name.length(); l++)
			{
				if (!isalnum(name[l]))
				{
					if (isspace(name[l]))
						continue;
					isfail = 0;
				}
			}
			if (name.length() >= 2 && isfail)
			{
				contacts[a].setString(name, i);
				flag = 0;
			}
			else
				std::cout << "Please enter a valid information" << std::endl;
		}
    }
    std::cout << "Contact added successfully." << std::endl;
}

void PhoneBook::searchPerson()
{
	int cinIndex;
	int flag = 1;
    std::cout <<"              Contact Display             " << std::endl;
    std::cout << std::right << std::setw(10) << "Index" << "|" << std::setw(10) << "First name" << "|"
			  << std::setw(10) << "Last name" << "|" << std::setw(10)
			  << "Nickname" << "|" << std::endl;
	for (size_t i = 0; i < 8; i++)
	{
		std::cout << std::right << std::setw(10) << i << "|" << std::setw(10);
		for (size_t j = 0; j < 3; j++)
		{
			if (contacts[i].getString(j).length() > 10)
			{
				std::cout << contacts[i].getString(j).substr(0,9) << ".|";
			}
			else
				std::cout << contacts[i].getString(j) << "|";
			std::cout << std::setw(10);
		}
		std::cout << std::endl;
	}
	std::cout << "Enter the Contact's index:" << std::endl;
	std::string input;
	while (flag)
	{
		getline(std::cin, input);
        std::istringstream iss(input);
		if (iss >> cinIndex)
		{
			if (cinIndex >= 0 && cinIndex <= 7 && input.length() == 1)
			{
				flag = 0;
			}
			else
			{
				std::cout << "Please enter an index between 0 and 7:" << std::endl; 
			}
		}
		else
			std::cout << "Please enter a valid integer index:" << std::endl;
	}
	for (size_t k = 0; k < 4; k++)
	{
		std::cout << strings[k] << contacts[cinIndex].getString(k) << std::endl;
	}
}
