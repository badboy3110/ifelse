#include<iostream>
using namespace std;
int main(){
    int n1,n2,n3;
    cout<<"enter number 1 ";
    cin>>n1;
    cout<<"enter number 2 ";
    cin>>n2;
    cout<<"enter number 3 ";
    cin>>n3;
    if(n1>n2 && n1>n3){
        cout<<"n1 is greatest";
    }
    else if(n2>n1 && n2>n3){
        cout<<"n2 is greatest";
    }
    else if(n3>n1 && n3>n2){
        cout<<"n3 is greatest";
    }
    else{
        cout<<"n1,n2 and n3 are equal";
    }
    return 0;
}