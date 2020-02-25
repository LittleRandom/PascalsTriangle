#include <iostream>
#include <vector>
#include "pyramid.h"


int main() {
    int num;
    std::cout << "Enter how long of a Pascal's Triangle" << std::endl;
    std::cin >> num;
    pyramid P(num);
    P.printPyramid();
    return 0;
}