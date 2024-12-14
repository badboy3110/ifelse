#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter the character ";
    cin>>ch;
    int d=(int)ch;
    if((d<=122 && d>=97)||(d<=90 && d>=65)){
        cout<<"charracter is a alphabet";
    }
    else if(d<=57 && d>=48){
        cout<<"the charracter is a digit";
    }
    else{
        cout<<"it is a special charracter";
    }
    return 0;
}