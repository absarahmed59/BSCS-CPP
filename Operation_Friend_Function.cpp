#include <iostream>
using namespace std;

class Cal{
    private:
        int a,b,ans;
        char op;
        friend void set_ans(Cal &obj);
        friend int get_ans(Cal &obj);
    public:
        Cal(){
            cout<<"Enter 1st Number: ";
            cin>>a;
            cout<<"Enter Operator: ";
            cin>>op;
            cout<<"Enter 2nd Number: ";
            cin>>b;
        };
};

void set_ans(Cal &obj){
    switch(obj.op){
        case '+':   obj.ans = obj.a+obj.b;  
                    break;
        case '-':   obj.ans = obj.a-obj.b;
                    break;
        case '*':   obj.ans = obj.a*obj.b;
                    break;
        case '/':   obj.ans = obj.a/obj.b;
                    break;
        case '%':   obj.ans = obj.a%obj.b;
                    break;
    }
}

int get_ans(Cal &obj){
    return obj.ans;
}



int main(){
    Cal sol1, sol2;
    set_ans(sol1);
    set_ans(sol2);
    cout<<"1st Answer is: "<<get_ans(sol1)<<endl;
    cout<<"2nd Answer is: "<<get_ans(sol2);


    return 0;
}