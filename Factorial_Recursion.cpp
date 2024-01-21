#include<iostream>
using namespace std;

int fact(int n){
    if (n==0)
        return 1;
    else 
        return n * fact(n-1);
}


int main(){
    int n, fac;
    cout<<"Enter Number for Factorial: ";
    cin>>n;
    fac = fact(n);
    cout<<"Factorial is: "<<fac;

    return 0;
}