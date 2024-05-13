#include <iostream>
#include <fstream>
#include <string>


int main()
{
    std::cout << "Enter the name of the source file: ";
    std::string text;
    std::string allstring;
    std::string replaced;
    getline(std::cin, text);
    std::ifstream myFile(text);
    if (!myFile.is_open())
    {
        std::cerr << "Cant open the file." << std::endl;
        return 1;
    }
    std::ifstream file(text);
    getline(file, allstring);
    std::cout << "Enter the string you want to replace: ";
    getline(std::cin, text);
    std::cout << "Enter the string you want to replace with: ";
    getline(std::cin, replaced);
    size_t position = allstring.find(text);
    if (position != std::string::npos)
    {
        allstring.erase(position, text.length());
        allstring.insert(position, replaced);
    }
    else
    {
        std::cerr << "The string not found." << std::endl;
        myFile.close();
        return 1;
    }
    std::ofstream newFile("Replaced.txt");
    if (!newFile.is_open())
    {
        std::cerr << "Cant open the file." << std::endl;
        myFile.close();
        return 1;
    }
    newFile << allstring;
    myFile.close();
    file.close();
    newFile.close();
    std::cout << "Completed." << std::endl;
    
    return 0;
}