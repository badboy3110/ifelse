#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"enter the point x ";
    cin>>x;
    cout<<"enter the point y ";
    cin>>y;
    if(x==0 && y!=0){
        cout<<"the point lie on the y axis";
    }
    else if(x!=0 && y==0){
        cout<<"the point lie on x axis";
    }
    else if(x==0 && y==0){
        cout<<"the point lie on origin";
    }
    else{
        cout<<"i am a ghost";
    }
    return 0;
}