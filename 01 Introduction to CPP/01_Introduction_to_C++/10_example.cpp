#include <iostream>
using namespace std;

int main(){
    // Take two integers input a and b : a>b, and find remainder when a is divided by b.

    int a = 16; // dividend
    int b = 3;  // divisor
    int q;    // quecient
    int r;  // remainder
    q = a/b;

    // dividend = quecient * divisor + remainder.

    r =  a - (q * b);

    cout<<r;

    return 0;
}