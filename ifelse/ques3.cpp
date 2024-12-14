#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter an integer";
    cin>>n;
    if(n<0){
        n=-1*n;
        cout<<"the absolute value is "<<n;
    }
    else{
        cout<<"the absolute value is "<<n;
    }
    return 0;
}