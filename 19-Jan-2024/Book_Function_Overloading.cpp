#include<iostream>
using namespace std;

void Book_Info(){
    cout<<"Book is Sold"<<endl;
}

void Book_Info(int Price)  {
    cout<<"Book Price is: "<<Price<<endl;
}
void Book_Info(int Price,string Title)  {
    cout<<"Book Price is: "<<Price<<endl;
    cout<<"Book Title is: "<<Title<<endl;
}
void Book_Info(int Price,string Title,string Author)  {
    cout<<"Book Price is: "<<Price<<endl;
    cout<<"Book Title is: "<<Title<<endl;
        cout<<"Book Auther is: "<<Author<<endl;
}


int main(){
    Book_Info();
    Book_Info(490);
    Book_Info(490,"Object Oriented");
    Book_Info(490,"Object Oriented", "IT Series");

    return 0;
}