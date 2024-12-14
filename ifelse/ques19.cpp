#include<iostream>
using namespace std;
int main(){
    int l,b;
    cout<<"enter length of rectrangle ";
    cin>>l;
    cout<<"enter the breadth of rectrangle ";
    cin>>b;
    int area=l*b;
    int perimeter=2*(l+b);
    if(area>perimeter){
        cout<<"area is greater than perimeter";
    }
    else if(area<perimeter){
        cout<<"area is smaller than perimeter";
    }
    else{
        cout<<"area and perimeter are equal";
    }
    return 0;
}