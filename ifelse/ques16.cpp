#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the number a";
    cin>>a;
    cout<<"enter the number b";
    cin>>b;
    if(a>b){
        cout<<"a is greatest";
    }
    else if(b>a){
        cout<<"b is greatest";
    }
    else{
        cout<<"a and b are equal";
    }
    return 0;
}