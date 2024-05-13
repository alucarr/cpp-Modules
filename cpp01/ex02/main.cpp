#include <iostream>

int main()
{
    std::string brain = "HI THIS IS BRAIN";
    std::string* stringPtr = &brain;
    std::string& stringRef = brain;

    std::cout << &brain << "," << stringPtr << "," << &stringRef << std::endl;
    std::cout << brain << "," << *stringPtr << "," << stringRef << std::endl;
}