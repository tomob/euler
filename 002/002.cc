#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

list<int> fibsUpTo(list<int>& fibs, int upTo)
{
    int x1 = 0, x2 = 1;
    fibs.push_back(x1);

    while(x2 < upTo) {
        fibs.push_back(x2);

        int n = x1 + x2;
        x1 = x2;
        x2 = n;
    }

    return fibs;
}

bool isOdd(int number)
{
    return number % 2 == 1;
}

int main()
{
    list<int> fibs;
    list<int>::iterator nend;
    int sum;
    
    fibsUpTo(fibs, 4000000);
    nend = remove_if(fibs.begin(), fibs.end(), isOdd);
    
    for(list<int>::iterator i=fibs.begin(); i != nend; i++) {
        sum += *i;
    }
    cout << "Sum: " << sum << endl;
    return 0;
}
