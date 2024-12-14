#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a positive intger";
    cin>>n;
    if(n<1000 && n>99){
        cout<<"the number is 3 digit";
    }
    else{
        cout<<"the number is not a 3 digit number";
    }
    return 0;
}