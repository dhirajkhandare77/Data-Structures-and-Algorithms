#include <iostream>
using namespace std;

int main(){
    cout<<"Enter number: ";
    int n;
    cin>>n;
    if(n%2==0){
        cout<<"even."<<endl;
    }
    else{
        cout<<"Odd."<<endl;
    }
    return 0;
}