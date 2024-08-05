#if !defined(ITERTEMPLATE_HPP)
#define ITERTEMPLATE_HPP
#include <iostream>

template <typename T,typename F>
void iter(T* array, size_t length, F func){
    for (size_t i = 0; i < length; ++i) {
        func(array[i]);
    }
}

void printInt(int x) {
    std::cout << x << std::endl;
}

template <typename T>
void printElement(const T& x) {
    std::cout << x << std::endl;
}

#endif // ITERTEMPLATE_HPP
