#include <iostream>
using namespace std;

class Birthday{
    private:
        int day, month, year;
    public:
        void set_DOB(int d, int m, int y) {
            day = d;
            month = m;
            year = y;
        }
        void show_DOB(){
            cout<<"Dob is: "<<day<<"/"<<month<<"/"<<year;
        }
};

class Person{
    private:
        Birthday birth;
        string name;
    public:
        void set_info(string n, Birthday b) {
            birth = b;
            name = n;
        }
        void show_info(){
            cout<<"Name is: "<<name<<endl;
            birth.show_DOB();
        }
};

int main(){
    Birthday b;
    b.set_DOB(11,2,2004);
    Person p;
    p.set_info("Absar Ahmed", b);
    p.show_info();
    
    return 0;
}