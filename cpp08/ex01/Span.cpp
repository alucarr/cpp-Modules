#include "Span.hpp"
#include <algorithm>
#include <limits>
#include <iostream>
Span::Span(unsigned int N) : max_size(N) {}

void Span::addNumber(int number) {
    if (numbers.size() >= max_size) {
        throw std::runtime_error("Span is full, cannot add more numbers.");
    }
    numbers.push_back(number);
}

unsigned int Span::shortestSpan() const {
    if (numbers.size() < 2) {
        throw std::runtime_error("Not enough numbers to find a span.");
    }

    std::vector<int> sortedNumbers(numbers);
    std::sort(sortedNumbers.begin(), sortedNumbers.end());

    int minSpan = std::numeric_limits<int>::max();
    for (size_t i = 1; i < sortedNumbers.size(); ++i) {
        int span = sortedNumbers[i] - sortedNumbers[i - 1];
        if (span < minSpan) {
            minSpan = span;
        }
    }
    return minSpan;
}

unsigned int Span::longestSpan() const {
    if (numbers.size() < 2) {
        throw std::runtime_error("Not enough numbers to find a span.");
    }

    int minNumber = *std::min_element(numbers.begin(), numbers.end());
    int maxNumber = *std::max_element(numbers.begin(), numbers.end());

    return maxNumber - minNumber;
}


Span::Span(const Span& other) : max_size(other.max_size), numbers(other.numbers) {}

Span& Span::operator=(const Span& other) {
    if (this != &other) {
        max_size = other.max_size;
        numbers = other.numbers;
    }
    return *this;
}

Span::~Span() {}