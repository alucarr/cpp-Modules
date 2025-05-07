#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <ctime>
#include <algorithm>

class PmergeMe {
public:
    PmergeMe();
    PmergeMe(const PmergeMe &other);
    PmergeMe &operator=(const PmergeMe &other);
    ~PmergeMe();

    void sortAndMeasure(std::vector<int> &vec, std::deque<int> &deq);
    static void printResults(const std::vector<int> &originalVec, 
                         const std::vector<int> &vec, const std::deque<int> &deq, double vecTime, double deqTime);
    static void parseInput(int argc, char **argv, std::vector<int> &vec, std::deque<int> &deq);

private:
    template <typename T>
    static void mergeInsertSortImpl(T &container);

    template <typename T>
    static void mergeInsertSort(T &container);
};

#endif
