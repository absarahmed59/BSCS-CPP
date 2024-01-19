#include<iostream>
using namespace std;


void Book_Price(int Price = 300)  {
    cout<<"Book Price is: "<<Price<<endl;
}
void Book_Title(string Title = "Unknown"){
    cout<<"Book Title is: "<<Title<<endl;
}
void Book_Auther(string Author = "Anonymous"){
    cout<<"Book Auther is: "<<Author<<endl;
}

int main(){
    Book_Price();
    Book_Title();
    Book_Auther();
    Book_Price(490);
    Book_Title("Object Oriented CPP");
    Book_Auther("IT Series");

    return 0;
}