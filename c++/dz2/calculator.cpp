#include<iostream>
main() {
    double x, y;
    int op;
    std::cout << "enter first number" << std::endl;
    std::cin >> x;
    std::cout << "enter second number" << std::endl;
    std::cin >> y;
    std::cout << "enter operation" << std::endl;
    std::cout << "1 - " << "\n2 +" << "\n3 *" << "\n4 /" << std::endl;
    std::cin >> op;

    switch (op) {
        case 1: {
            std::cout << x - y << std::endl;
            break;
        }
        case 2: {
            std::cout << x + y << std::endl;
            break;
        }
        case 3: {
            std::cout << x * y << std::endl;
            break;
        }
        case 4: {
            std::cout << x / y << std::endl;
            break;
        }
        default: {
            std::cout << "incorrect operation number" << std::endl;
        }
    }
}
