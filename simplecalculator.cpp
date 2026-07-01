#include<iostream>
using namespace std;

int main(){
     double num1 ,num2;
     char op;
     cout<<"enter the operator(+,-.*./) : ";
     cin>>op;
     cout<<"enter two numbers one by one : ";
     cin>>num1>>num2;
     switch( op ){
        case '+':
        cout<<num1<<op<<num2<<"="<<num1+num2<<endl;
        break;
        case '-':
        cout<<num1<<op<<num2<<"="<<num1-num2<<endl;
        break;
        case '*':
        cout<<num1<<op<<num2<<"="<< num1*num2<<endl;
        break;
        case '/':
        if(num2==0.0){
            cout<<"devide by 0 situation";
        }
        else{
            cout<<num1<<op<<num2<<"="<<num1/num2<<endl;
        }
        break;
        default:
        cout<<"inavlid operator"<<endl;
     }

}