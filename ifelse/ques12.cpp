#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter num1 ";
    cin>>a;
    cout<<"enter num2 ";
    cin>>b;
    cout<<"enter num2 ";
    cin>>c;
    if(a>b){
        if(a>c){
            cout<<"num1 is greatest";
        }
        else{
            cout<<"num3 is greatest";
        }
    }
    else if(b>a){
        if(b>c){
        cout<<"num2 is greatest";
        }
        else{
            cout<<"num3 is greatest";
        }
    }
    else{
        cout<<"all numbers are equal";
    }
    return 0;
}