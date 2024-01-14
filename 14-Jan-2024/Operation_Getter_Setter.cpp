#include <iostream>
using namespace std;

class Cal{
    private:
        int a,b,ans;
        char op;
    public:
        void set_values(int x, int y, char c){
            a = x;
            b = y;
            op = c;
        }
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
    return;
}