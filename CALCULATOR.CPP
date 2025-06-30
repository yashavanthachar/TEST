#include<iostream>
using namespace std;

class Calculator{

public:
    double calculate(double a,double b,string op){
        if(op=="add"){
            return a+b;
        }else if(op=="subtract"){

            return a-b;
        }else if(op=="multiply"){

            return a*b;
        }else if(op=="divide"){
            if(b==0){
                cout<<"Division by error is not allowed"<<endl;
                return 0;
            }
            return a/b;

        }else{
        cout<<"invalid operation"<<endl;
        return 0;
        }

    }

};
int main(){
    double x,y;
    string op;
    cout<<"Enter the first and second number :"<<endl;
    cin>>x>>y;
    cout<<"enter the operation(add/subtract/multiply/divide):"<<endl;
    cin>>op;
    Calculator c;
    double result=c.calculate(x,y,op);
    cout<<"result:"<<result<<endl;
    return 0;
}

