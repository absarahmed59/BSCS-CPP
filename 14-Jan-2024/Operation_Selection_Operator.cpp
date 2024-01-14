#include <iostream>
using namespace std;

class Cal{
    private:
        int a,b,ans;
        char op;
    public:
        Cal(int x, int y, char c) : a(x), b(y), op(c) {};
        void set_ans(){
            switch(op){
                case '+':
                    ans = a+b;
                    break;
                case '-':
                    ans = a-b;
                    break;
                case '*':
                    ans = a*b;
                    break;
                case '/':
                    ans = a/b;
                    break;
                case '%':
                    ans = a%b;
                    break;
            }
        }
        int get_ans(){
            return ans;
        }
};

int main(){
    Cal obj1(10,20,'+'),obj2(20,10,'-');
    Cal *p1 = &obj1;
    Cal *p2 = &obj2;
    
    p1->set_ans();
    p2->set_ans();
    cout<<p1->get_ans()<<endl;
    cout<<p2->get_ans();   
    
}