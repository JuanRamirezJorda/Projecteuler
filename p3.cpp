#include <iostream>
#include <cmath>

long long maxPrimeFactor(long long n){
    /*
    Designed to calculate the biggest prime factor, i.e.:
    The number that is divisible by n, result in no remainder & different than itself or 1.
    return: long long int  
    */

    long long maxPrime {1}; // We cannot initialize at 0   
 
    // Print the number of 2s that divide n
    while (n % 2 == 0) {
        maxPrime = 2;
        n /= 2; // equivalent to n /= 2
    }
    // n must be odd at this point
     while (n % 3 == 0) {
        maxPrime = 3;
        n/= 3;
    }
 
    // We need to iterate numbers that have not prime factors as 2 or 3
    for (int i = 5; i <= sqrt(static_cast<double>(n)); i += 6) {
        while (n % i == 0) {
            maxPrime = i;
            n /= i;
        }
      while (n % (i+2) == 0) {
            maxPrime = i+2;
            n /= (i+2);
        }
    }
 
    // We return n as its prime factor in case is a Prime number
    if (n > 4)maxPrime = n;
 
    return maxPrime;
}
 
int main()
{
    std::cout << maxPrimeFactor(600851475143);
    
}
