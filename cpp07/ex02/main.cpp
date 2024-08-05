#include <iostream>
#include "Array.hpp"

int main() {
    try {
        Array<int> arr(5);

        for (unsigned int i = 0; i < arr.size(); ++i) {
            arr[i] = i * 10;
        }

        for (unsigned int i = 0; i < arr.size(); ++i) {
            std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
        }

        Array<int> arrCopy = arr;

        arrCopy[0] = 100;

        std::cout << "Original array after modifying copy:" << std::endl;
        for (unsigned int i = 0; i < arr.size(); ++i) {
            std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
        }

        std::cout << "Copy array after modification:" << std::endl;
        for (unsigned int i = 0; i < arrCopy.size(); ++i) {
            std::cout << "arrCopy[" << i << "] = " << arrCopy[i] << std::endl;
        }

        try {
            std::cout << arr[10] << std::endl;
        } catch (const std::out_of_range& e) {
            std::cerr << "Caught exception: " << e.what() << std::endl;
        }
    } catch (const std::exception& e) {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }

    return 0;
}
