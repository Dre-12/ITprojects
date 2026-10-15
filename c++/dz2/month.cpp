#include<iostream>
main() {
    int input;
    std::cout << "enter your month number (1-12)" << std::endl;
    std::cin >> input;

    switch (input) {
        case 1: {
            std::cout << "january" << std::endl;
            break;
        }
        case 2: {
            std::cout << "february" << std::endl;
            break;
        }
        case 3: {
            std::cout << "march" << std::endl;
            break;
        }
        case 4: {
            std::cout << "april" << std::endl;
            break;
        }
        case 5: {
            std::cout << "may" << std::endl;
            break;
        }
        case 6: {
            std::cout << "june" << std::endl;
            break;
        }
        case 7: {
            std::cout << "jule" << std::endl;
            break;
        }
        case 8: {
            std::cout << "august" << std::endl;
            break;
        }
        case 9: {
            std::cout << "september" << std::endl;
            break;
        }
        case 10: {
            std::cout << "october" << std::endl;
            break;
        }
        case 11: {
            std::cout << "november" << std::endl;
            break;
        }
        case 12: {
            std::cout << "december" << std::endl;
            break;
        }
        default: {
            std::cout << "incorect number" << std::endl;
            break;
        }
    }
}