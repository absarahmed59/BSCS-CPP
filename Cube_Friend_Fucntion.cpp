#include <iostream>
using namespace std;

class Cube{
    private:
        int side, volume;
        friend void set_volume(Cube &obj);
        friend int get_volume(Cube &obj);
    public:
        Cube() {
            cout<<"Enter the side of Cube: ";
            cin>>side;
        }
};

void set_volume(Cube &obj){
    obj.volume = obj.side * obj.side * obj.side;
}

int get_volume(Cube &obj){
    return obj.volume;
}

int main(){
    Cube obj1, obj2;
    set_volume(obj1);
    set_volume(obj2);
    cout<<"Volume of Cube1 is: "<<get_volume(obj1)<<endl;
    cout<<"Volume of Cube2 is: "<<get_volume(obj2)<<endl;
}