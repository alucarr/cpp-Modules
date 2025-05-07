#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe &other) {
    *this = other;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &other) {
    (void)other;
    return *this;
}

PmergeMe::~PmergeMe() {}

void PmergeMe::parseInput(int argc, char **argv, std::vector<int> &vec, std::deque<int> &deq) {
    for (int i = 1; i < argc; i++) {
        std::string arg = argv[i];
        for (size_t j = 0; j < arg.size(); j++) {
            if (!isdigit(arg[j])) {
                std::cerr << "Error" << std::endl;
                exit(1);
            }
        }
        int num = std::atoi(argv[i]);
        vec.push_back(num);
        deq.push_back(num);
    }
}

template <typename T>
void PmergeMe::mergeInsertSortImpl(T &container) {
    if (container.size() < 2)
        return;

    T mainChain;
    T pend;
    
    for (size_t i = 0; i + 1 < container.size(); i += 2) {
        if (container[i] > container[i + 1]) {
            std::swap(container[i], container[i + 1]);
        }                                       // 3 5 7 4 9 -- 7 4 9 ? -- 5 7 9 ?
        mainChain.push_back(container[i + 1]); // 5 7 -- 9
        pend.push_back(container[i]); // 3 4 -- 5 7 
    }

    if (container.size() % 2 != 0)
        mainChain.push_back(container.back()); // 9

    mergeInsertSortImpl(mainChain);

    for (size_t i = 0; i < pend.size(); ++i) {
        typename T::iterator pos = std::lower_bound(mainChain.begin(), mainChain.end(), pend[i]);
        mainChain.insert(pos, pend[i]);
    }

    container.swap(mainChain);
}

template <typename T>
void PmergeMe::mergeInsertSort(T &container) {
    mergeInsertSortImpl(container);
}

void PmergeMe::sortAndMeasure(std::vector<int> &vec, std::deque<int> &deq) {
    std::vector<int> originalVec = vec;
    std::deque<int> originalDeq = deq;

    clock_t startVec = clock();
    mergeInsertSort(vec);
    clock_t endVec = clock();
    double vecTime = static_cast<double>(endVec - startVec) / CLOCKS_PER_SEC * 1000000;

    clock_t startDeq = clock();
    mergeInsertSort(deq);
    clock_t endDeq = clock();
    double deqTime = static_cast<double>(endDeq - startDeq) / CLOCKS_PER_SEC * 1000000;

    printResults(originalVec, vec, deq, vecTime, deqTime);
}

void PmergeMe::printResults(const std::vector<int> &originalVec, 
                            const std::vector<int> &vec, const std::deque<int> &deq, double vecTime, double deqTime) {
    std::cout << "Before:";
    for (size_t i = 0; i < originalVec.size(); i++)
        std::cout << " " << originalVec[i];
    std::cout << std::endl;

    std::cout << "After:";
    for (size_t i = 0; i < vec.size(); i++)
        std::cout << " " << vec[i];
    std::cout << std::endl;

    std::cout << "Time to process a range of " << vec.size() << " elements with std::vector: " << vecTime << " us" << std::endl;
    std::cout << "Time to process a range of " << deq.size() << " elements with std::deque: " << deqTime << " us" << std::endl;
}

