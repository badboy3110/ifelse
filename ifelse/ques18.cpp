#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"enter a year ";
    cin>>year;
    if((year%4==0)&&(year%100!=0)||(year%400==0)){
        cout<<"year is a leap year";
    }
    else{
        cout<<"the year is not leap year";
    }
    return 0;
}