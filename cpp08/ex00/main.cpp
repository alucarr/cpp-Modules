#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main() {
    std::vector<int> vec;
    for (size_t i = 0; i < 5; i++)
        vec.push_back(i);

    try {
        std::vector<int>::iterator it = easyfind(vec, 3);
        std::cout << "Element found: " << *it << std::endl;
    } catch (const NotFoundException& e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        std::vector<int>::iterator it = easyfind(vec, 6);
        std::cout << "Element found: " << *it << std::endl;
    } catch (const NotFoundException& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
