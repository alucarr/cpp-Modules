#include "Iter.hpp"

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    size_t len = sizeof(arr) / sizeof(arr[0]);

    std::string hamsi = "Hamsi tava, hamsi pilav";
    size_t hamsiLen = hamsi.length();


    std::cout << "printInt function:" << std::endl;
    iter(arr, len, printInt);

    std::cout << "printElement function template:" << std::endl;
    iter(arr, len, printElement<int>);

    std::cout << "printElement function template:" << std::endl;
    iter(hamsi.c_str(), hamsiLen, printElement<char>);
    return 0;
}