#include<iostream>
using namespace std;

void Digit_Counter(int n){
    int Rem, EvenCounter=0, OddCounter=0, ZeroCounter=0;
    while(n!=0){
        Rem = n % 10;
        if(Rem == 0) ZeroCounter++;
        else if(Rem % 2 == 0) EvenCounter++;
        else OddCounter++;
        n=n/10;
    }
    cout<<"Number of Zeros: "<<ZeroCounter<<endl;
    cout<<"Number of Even Digits: "<<EvenCounter<<endl;
    cout<<"Number of Odd Digits: "<<OddCounter;
    return;
}

int main(){
    int num;
    cout<<"Enter the Number: ";
    cin>>num;
    Digit_Counter(num);

    return 0;
}