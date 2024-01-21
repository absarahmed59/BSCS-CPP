#include <iostream>
using namespace std;

class Cube{
    private:
        int side, volume;
    public:
        void set_side(int s){
            side = s;
        }
        void cal_volume(){
            volume = side * side * side;
        }
        int get_volume(){
            return volume;
        }
};

int main(){
    int s1, s2;
    Cube obj1, obj2;
    cout<<"Enter 1st object side: ";
    cin>>s1;
    cout<<"Enter 2st object side: ";
    cin>>s2;
    Cube *ptr1 = &obj1;
    Cube *ptr2 = &obj2;
    ptr1->set_side(s1);
    ptr1->cal_volume();
    cout<<"Volume of Cube1 is: "<<obj1.get_volume()<<endl;
    
    ptr2->set_side(s2);
    ptr2->cal_volume();
    cout<<"Volume of Cube2 is: "<<obj2.get_volume()<<endl;
}