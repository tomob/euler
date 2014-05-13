#include <iostream>
#include <cmath>

using namespace std;

/* Quickly sums numbers form 1 to N */
int quicksum(int n)
{
    return (n + 1) * n / 2;
}

int sumOfSquares(int n)
{
    int sum = 0;
    for(int i=1; i <= n; ++i) {
        sum += i*i;
    }

    return sum;
}

int diff(int n)
{
    return pow(quicksum(n), 2) - sumOfSquares(n);
}

int main()
{
    cout << "Diff(10): " << diff(10) << endl;
    cout << "Diff(100): " << diff(100) << endl;
    return 0;
}
