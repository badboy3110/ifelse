#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter the number";
    cin>>x;
    if(x%2==0){
        cout<<"the number is even";
    }
    else if(x%2!=0){
        cout<<"the number is odd";
    }
    return 0;
}