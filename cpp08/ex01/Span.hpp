#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <algorithm>
#include <stdexcept>
#include <iterator>
#include <limits>

class Span {
public:
    Span(unsigned int N);

    template <typename InputIterator>
    void addRange(InputIterator first, InputIterator last);

    void addNumber(int number);
    unsigned int shortestSpan() const;
    unsigned int longestSpan() const;


    Span(const Span& other);
    Span& operator=(const Span& other);
    ~Span();


private:
    unsigned int max_size;
    std::vector<int> numbers;
};

template <typename InputIterator>
void Span::addRange(InputIterator first, InputIterator last) {
    std::ptrdiff_t rangeSize = std::distance(first, last);

    if (rangeSize > static_cast<std::ptrdiff_t>(max_size - numbers.size())) {
        throw std::runtime_error("Not enough space to add all numbers in the range.");
    }

    numbers.insert(numbers.end(), first, last);
}

#endif // SPAN_HPP
