#include <iostream>
using namespace std;

class Cube{
    private:
        int side, volume;
    public:
        Cube(){
            cout<<"Enter the side of Cube: ";
            cin>>side;
            volume = side * side * side;
        }
        int get_volume(){
            return volume;
        }
};

int main(){
    Cube obj1, obj2;
    cout<<"Volume of Cube1 is: "<<obj1.get_volume()<<endl;
    cout<<"Volume of Cube2 is: "<<obj2.get_volume()<<endl;
}