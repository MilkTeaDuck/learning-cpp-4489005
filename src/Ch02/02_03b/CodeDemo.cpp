// Learning C++ 
// Exercise 02_03
// Using Variables, by Eduardo Corpeño 

#include <iostream>

int a, b = 5;

int main(){
    bool my_flag;
    a = 7;
    my_flag = false;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "flag = " << my_flag << std::endl;
    std::cout << "c = " << a + b << std::endl;

    // Signed 
    signed int sPositive;
    sPositive = b - a; 
    std::cout << "Signed Positive = " << sPositive << std::endl;

    // Unsigned 
    unsigned int uPositive;
    uPositive = b - a;
    std::cout << "Unsigned Positive = " << uPositive << std::endl;

    
    std::cout << std::endl << std::endl;
    return (0);
}
