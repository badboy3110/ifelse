#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number n ";
    cin>>n;
    if(n%5==0){
        if(n%3==0){
            cout<<"the number is divisible by 3 and 5";
        }
        else{
            cout<<"the number is only divisible by 5";
        }
    }
    else{
        cout<<"the number is not divisible by 5 ";
    }
    return 0;
}