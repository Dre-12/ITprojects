#include<iostream>
main() {
    int a, b;
    b = 0;
    std::cout << "Enter any numbers but 0" << std::endl;
    while (a != 0) {
        std::cin >> a;
        b = b + a;
    }
    std::cout << "you enter 0" << std::endl;
    std::cout << "sum of your numbers: " << b << std::endl;
}