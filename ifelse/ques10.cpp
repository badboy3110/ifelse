#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number ";
    cin>>n;
    if(n%5==0 || n%3==0){
        if(n%15!=0){
            cout<<"the number is divisible by 5 or 3 but not 15";
        }
        else{
            cout<<"haha";
        }
    }
    else{
        cout<<"stfu";
    }
    return 0;
}