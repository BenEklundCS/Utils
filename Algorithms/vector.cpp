#include <iostream>
#include <vector>
#include "vector.h"

int main() {
    std::vector<int> unsorted = {5, 1, -2, 6, 67, 2, 11, 13, 20, 156, 256, -56, -100, -5};
    printv(unsorted);
    std::cout << linear_search(unsorted, -100) << '\n';
    std::cout << linear_search(unsorted, 1000) << '\n';
    return EXIT_SUCCESS;
}

void printv(std::vector<int> vector) {
    // Opening formatting
    std::cout << "v = {";
    // cout all but the last element in the vector
    for (std::size_t i = 0; i < vector.size()-1; i++) {
        std::cout << vector[i] << " ";
    }
    // cout the last element with additional formatting
    std::cout << vector.back() << "}\n";
}

int linear_search(std::vector<int> vector, int num) {
    for (std::size_t i = 0; i < vector.size(); i++) {
        if (vector[i] == num) {
            return i;
        }
    }
    // "-1" indicates that the term was not found
    return -1;
}
