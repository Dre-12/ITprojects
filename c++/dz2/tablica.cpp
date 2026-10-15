#include<iostream>
main() {
    int a;
    std::cout << "Enter number" << std::endl;
    std::cin >> a;
    if (a > 0) {
        for (int i = 1 ; i <= 10; i++) {
            std::cout << a << " * " << i << " = " << a * i <<std::endl;
         }
    }
    else {
        std::cout << "incorrect number" << std::endl;
    }
}