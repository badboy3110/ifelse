#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number n";
    cin>>n;
    if(n%5==0 || n%3==0){
        cout<<"the number is either divisible by 3 or 5";
    }
    else{
        cout<<"the number is not divisible by 5 or 3";
    }
    return 0;
}