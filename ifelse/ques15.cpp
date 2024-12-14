#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter side a ";
    cin>>a;
    cout<<"enter side b ";
    cin>>b;
    cout<<"enter side c ";
    cin>>c;
    if((a+b>c)&&(a+c>b)&&(b+c>a)){
        cout<<"a,b,c are sides of a triangle";
    }
    else{
        cout<<"a,b,c are not the sides of triangle";
    }
    return 0;
}