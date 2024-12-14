#include<iostream>
using namespace std;
int main(){
    int a,b;
    char c;
    cout<<"enter number a ";
    cin>>a;
    cout<<"enter number b ";
    cin>>b;
    cout<<"enter the opperator ";
    cin>>c;
    switch(c){
        case '+' :
        cout<<"the addition is "<<a+b;
        break;
        case '-':
        cout<<"the subtraction is "<<a-b;
        break;
        case '*':
        cout<<"the multiplication is "<<a*b;
        break;
        case '/':
        cout<<"the division is "<<a/b;
        break;
        case '%':
        cout<<"the remainder is "<<a%b;
        break;
        default :
        cout<<"wrong opperator";
    }
    return 0;
}