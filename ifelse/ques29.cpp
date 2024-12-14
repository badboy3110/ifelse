#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter month number ";
    cin>>m;
    switch(m<=7 && m%2!=0){
        case 1:
        cout<<"the month has 31 days";
        break;
    }
    switch(m==2){
        case 1:
        cout<<"the month has 28 days";
        break;
    }
    switch(m)
}