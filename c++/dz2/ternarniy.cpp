#include<iostream>
main() {
    int x, y, z;
    std::cout << "enter integers" << "\nenter first integer" << std::endl;
    std::cin >> x;
    std::cout << "enter second integer" <<std::endl;
    std::cin >>y;
    std::cout<<"enter third integer"<<std::endl;
    std::cin >> z;
    int res = x > y ? (x > z ? (x) : (z)) : (y > z ? (y) : (z));
    std::cout << res << std::endl;
}