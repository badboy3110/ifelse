#include<iostream>
using namespace std;
int main(){
    int r,a,c;
    cout<<"enter radious of circle ";
    cin>>r;
    int pie=3.14;
    a=pie*r*r;
    c=2*pie*r;
    if(a>c){
        cout<<"area is larger than circumference";
    }
    else if(a<c){
        cout<<"area is smaller than circumference";
    }
    else{
        cout<<"area and circumference are equal";
    }
    return 0;
}