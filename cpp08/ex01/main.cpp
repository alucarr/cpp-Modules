#include "Span.hpp"
#include <iostream>
#include <vector>

int main() {
    try {
        Span sp(5);
        std::vector<int> moreNumbers;

        int values[] = {1, 5, 9, 15, 25};

        for (unsigned int i = 0; i < sizeof(values)/sizeof(values[0]); i++) 
            moreNumbers.push_back(values[i]);

        sp.addRange(moreNumbers.begin(), moreNumbers.end());
        //sp.addNumber(5);
        std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << sp.longestSpan() << std::endl;

    }
    catch (const std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
