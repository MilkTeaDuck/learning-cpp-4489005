// Learning C++ 
// Exercise 03_09
// Vectors, by Eduardo Corpeño 

#include <vector>
#include <iostream>
#include <string>

int main(){
    std::vector<int> primes;
    
    primes.push_back(2);
    primes.push_back(5);
    primes.push_back(4);
    primes.push_back(7);
    primes.push_back(3);

    

    std::cout << "This vector has " << primes.size() << " elements." << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
