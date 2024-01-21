#include <iostream>
using namespace std;

class Cube{
    private:
        int side, volume;
    public:
        Cube(int s) : side(s) {
            volume = side * side * side;
        }
        int get_volume(){
            return volume;
        }
};

int main(){
    int s1, s2;
    cout<<"Enter 1st object side: ";
    cin>>s1;
    cout<<"Enter 2st object side: ";
    cin>>s2;
    Cube obj1(s1), obj2(s2);
    cout<<"Volume of Cube1 is: "<<obj1.get_volume()<<endl;
    cout<<"Volume of Cube2 is: "<<obj2.get_volume()<<endl;
}