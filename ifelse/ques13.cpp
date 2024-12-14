#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter percentage of student";
    cin>>n;
    if(n<=100 && n>=91){
        cout<<"excellent";
    }
    else if(n<=90 && n>=81){
        cout<<"very good";
    }
    else if(n<=80 && n>=71){
        cout<<"good";
    }
    else if(n<=70 && n>=61){
        cout<<"can do better";
    }
    if(n<=60 && n>=51){
        cout<<"average";
    }
    if(n<=50 && n>=40){
        cout<<"bellow average";
    }
    if(n<40){
        cout<<"fail";
    }
    return 0;
}
