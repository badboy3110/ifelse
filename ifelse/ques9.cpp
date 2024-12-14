#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter the charracter ";
    cin>>ch;
    int d=(int)ch;
    if(d>=65 && d<=90){
        cout<<"the charracter is a big alphabet";
    }
    else if(d>=97 && d<=122){
        cout<<"the charracter is small alphabet";
    }
    else{
        cout<<"the charracter is not an alphabet";
    }
    return 0;
}