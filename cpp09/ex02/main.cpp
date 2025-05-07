#include "PmergeMe.hpp"

int main(int argc, char **argv) {
    if (argc < 2) {
        std::cerr << "Error" << std::endl;
        return 1;
    }

    std::vector<int> vec;
    std::deque<int> deq;

    PmergeMe::parseInput(argc, argv, vec, deq);
    
    PmergeMe sorter;
    sorter.sortAndMeasure(vec, deq);

    return 0;
}
