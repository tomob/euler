#include <iostream>

using namespace std;

void findABC()
{
    for(int a=1; a<=1000; a++) {
        for(int b=a+1; b<=1000-a; b++) {
            int c = 1000-a-b;
            if (   a+b+c == 1000 && a*a + b*b == c*c) {
                cout << "a: " << a
                     << ", b: " << b
                     << ", c: " << c
                     << ", a*b*c: " << a*b*c << endl;
            }
        }
    }
}

int main()
{
    findABC();
    return 0;
}
