// Que: Take positive integer input or tell if it is divisible by 5 or 3.

#include <iostream>
using namespace std;

int main(){
    cout<<"Enter num: ";
    int n;
    cin>>n;
    if (n%5==0 || n%3==0)
    {
        cout<<"Divisible by 5 or 3."<<endl;
    }
    else{
        cout<<"Not divisible."<<endl;
    }
    return 0;
}