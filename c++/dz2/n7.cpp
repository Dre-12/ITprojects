#include<iostream>
main() {
    char y = 'y';
    int a, b;
    while (y == 'y' || y == 'Y') {
        std::cout << "enter first number" << std::endl;
        std::cin >> a;
        std::cout << "enter second number" << std::endl;
        std::cin >> b;
        std::cout << a << " * " << b << " = " << a * b << std::endl;
        std::cout << "repite? (y/n)" << std::endl;
        std::cin >> y;
    }
}