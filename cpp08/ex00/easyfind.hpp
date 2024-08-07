#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <iterator>
#include <stdexcept>

class NotFoundException : public std::runtime_error {
public:
    NotFoundException(const std::string& message) : std::runtime_error(message) {}
};

template <typename T>
typename T::iterator easyfind(T& container, int n) {
    typename T::iterator it = std::find(container.begin(), container.end(), n);
    if (it == container.end()) {
        throw NotFoundException("Element not found");
    }
    return it;
}

#endif // EASYFIND_HPP
