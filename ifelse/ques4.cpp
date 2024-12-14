#include<iostream>
using namespace std;
int main(){
    int cp,sp,profit,loss;
    cout<<"enter cost price of item ";
    cin>>cp;
    cout<<"enter selling price of item ";
    cin>>sp;
    if(cp<sp){
        profit=sp-cp;
        cout<<"the profit made is "<<profit;
    }
    else if (cp>sp){
        loss=cp-sp;
        cout<<"the loss made is "<<loss;
    }
    else{
        cout<<"no loss or profit";
    }
    return 0;
}