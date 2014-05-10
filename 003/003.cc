#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(unsigned number)
{
    if (number <=1)
        return false;
    if (number == 2)         
        return true;
    if (number % 2 == 0)
        return false;

    bool prime = true;
    int divisor = 3;
    unsigned upperLimit = static_cast<unsigned>(sqrt(number) + 1);
        
    while (divisor <= upperLimit) {
        if (number % divisor == 0)
            prime = false;
        divisor +=2;
    }

    return prime;
}
    
int main()
{
    unsigned last_prime = 0;
    unsigned square_root = static_cast<unsigned>(sqrt(600851475143.0));

    for (unsigned i=2; i<square_root; ++i) {
        if (isPrime(i) && 600851475143 % i == 0) {
            last_prime = i;
        }
    }
    
    cout << "Largest: " << last_prime << endl;
    return 0;
}
