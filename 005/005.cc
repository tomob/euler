#include <iostream>
#include <set>
#include <algorithm>
#include <functional>
#include <numeric>

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


void factorize(int n, multiset<int>& factor)
{
    unsigned upperLimit = static_cast<unsigned>(sqrt(n) + 1);
    int f = 2;

    while(f <= n) {
        if (isPrime(f) && n % f == 0) {
            factor.insert(f);
            n /= f;
        } else {
            f++;
        }
    }
}

int smallest(int n)
{
    multiset<int> reqFactors;
    
    for(int i=2; i<=n; ++i) {
        multiset<int> factors;
        vector<int> union_(20);
        
        factorize(i, factors);
        auto end = set_union(factors.begin(), factors.end(),
                             reqFactors.begin(), reqFactors.end(),
                             union_.begin());
        reqFactors.clear();
        reqFactors.insert(union_.begin(), end);
    }

    return accumulate(reqFactors.begin(), reqFactors.end(),
                      1, multiplies<int>());
}

int main()
{
    cout << "Smallest(10): " << smallest(10) << endl;
    cout << "Smallest(20): " << smallest(20) << endl;

    return 0;
}
