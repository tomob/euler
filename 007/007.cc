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
    unsigned long counter = 0;

    for (unsigned long i=2; i<ULONG_MAX; i++) {
        if (isPrime(i)) counter++;
        if (counter == 10001) {
            cout << "10001th prime: " << i << endl;
            break;
        }
    }
    
    return 0;
}
