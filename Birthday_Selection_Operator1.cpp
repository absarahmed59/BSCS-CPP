#include <iostream>
using namespace std;

class Birthday{
    private:
        int day, month, year;
    public:
        Birthday(int d, int m, int y) {
            day = d;
            month = m;
            year = y;
        }
        void DOB(){
            cout<<"Dob is: "<<day<<"/"<<month<<"/"<<year;
        }
};

class Person{
    private:
        Birthday birth;
        string name;
    public:
        Person(string n, Birthday b) : birth(b) {
            name = n;
        }
        void show_info(){
            cout<<"Name is: "<<name<<endl;
            birth.DOB();
        }
};

int main(){
    Birthday b(11,2,2004);
    Person p("Absar Ahmed", b);
    Person *ptr = &p;
    ptr->show_info();
    return 0;
}