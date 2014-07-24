#include <iostream>
#include <climits>
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
    unsigned long sum = 0;

    for (unsigned long i=2; i<2000000; i++) {
        if (isPrime(i))
            sum += i;
    }

    cout << "Sum of primes below 2000000: " << sum << endl;
    
    return 0;
}
