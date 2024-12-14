#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the side1 ";
    cin>>a;
    cout<<"enter the side2 ";
    cin>>b;
    cout<<"enter the side3 ";
    cin>>c;
    if((a+b>c)&&(a+c>b)&&(b+c>a)){
        if(a==b==c){
            cout<<"the triangle is equilaterial";
        }
        else if((a=b)||(a=c)||(b=c)){
            cout<<"the triangle is isocelles";
        }
        else if((a*a==b*b+c*c)||(b*b==c*c+a*a)||(c*c==a*a+b*b)){
            cout<<"the triangle is right angled";
        }
        else{
            cout<<"the triangle is scallene";
        }
    }
    else{
        cout<<"not a triangle";
    }
    return 0;
}