#include "iter.hpp"
#include <iostream>
void printInt(int const &x) { std::cout << x << " "; }
void increment(int &x) {x++;}
int main() {

    int arr[] = {1, 2, 3};
    iter(arr, 3, printInt);
    std::cout << std::endl;
    iter(arr, 3, increment);
    iter(arr, 3, 5);
    std::cout << std::endl;
}
