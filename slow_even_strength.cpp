/*
Problem:

Given a closed interval [n, m], return the even number that is the strongest 
in the interval. If multiple solutions exist return the smallest strongest even number.

A strongness of an even number is the number of times we can successively divide by 2
 until we reach an odd number starting with an even number n.

For example, if n = 12, then

    12 / 2 = 6
    6 / 2 = 3

So we divided successively 2 times and we reached 3, so the strongness of 12 is 2.
*/


// Solution is not optimized, but was working on this problem: https://www.codewars.com/kata/5d16af632cf48200254a6244/train/cpp
// Currently this solution times out with large datasets - but it is a correct brute force calculation for small ones.

#include <iostream>

int get_strength(int n) {
    int i = 0;
    while (n % 2 == 0) {
        n /= 2;
        i++;
    }
    return i;
}

int strongest_even(int n, int m) {
    if (n % 2 != 0) {
        n++;
    }
    
    int strongest_so_far, strongest_even, strength = 0;

    for (int i = n; i <= m; i += 2) {
        strength = get_strength(i);
        std::cout << "Strength at " << i << ":" << strength << "\n";
        if (strength > strongest_so_far) {
            strongest_even = i;
            strongest_so_far = strength;
        }
    }
    return strongest_even;
}

int main() {
    std::cout << strongest_even(1, 2) << std::endl; // --> 2
    std::cout << strongest_even(5, 10) << std::endl; // --> 8
    std::cout << strongest_even(48, 56) << std::endl; // --> 48
    std::cout << strongest_even(129, 193) << std::endl; // --> 192
}
