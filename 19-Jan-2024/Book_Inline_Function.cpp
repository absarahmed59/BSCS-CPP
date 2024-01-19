#include<iostream>
using namespace std;

inline void Book()  {   cout<<"C Plus Plus & Object Oriented BY IT SERIES"<<endl; }
inline int Sum(int a, int b) {  return a+b; }
int main(){
    Book();
    cout<<Sum(10,20)<endl;
   return 0;
}