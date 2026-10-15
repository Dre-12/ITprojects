#include<iostream>
main(){
    int a, b ,c;
    b = 0;
    c = 0;
    std::cout << "enter numbers" << std::endl;
    while (a >= 0) {
        std::cin >> a;
        if (a % 2 == 0) {
            b++;
        }
        else {
            c++;
        }
    }
    std::cout << "aboba" << std::endl;
    std::cout << "Chetkie chisla: " << b << std::endl;
    std::cout << "Nechetkie chisla: " << c << std::endl;
}