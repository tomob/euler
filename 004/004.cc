#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

bool isPalindrome(int number)
{
    stringstream s;
    string str;
    int i = 0, j = 0;
    
    s << number;
    str = s.str();

    j = str.length() - 1;
    while (i < j) {
        if (str[i] != str[j]) {
            return false;
        }
        i++; j--;
    }
    
    return true;
}

void generateProducts(vector<unsigned>& products)
{
    for(unsigned i=100; i<1000; ++i) {
        for(unsigned j=100; j<1000; ++j) {
            products.push_back(i*j);
        }
    }
}

int main()
{
    vector<unsigned> products;
    
    generateProducts(products);
    sort(products.begin(), products.end(), greater<unsigned>());
    unique(products.begin(), products.end());

    for (vector<unsigned>::iterator i=products.begin();
         i != products.end(); i++) {
        if (isPalindrome(*i)) {
            cout << "Largest: " << *i << endl;
            return 0;
        }
    }
         
    return 0;
}
