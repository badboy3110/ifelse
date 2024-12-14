#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter marks for a ";
    cin>>a;
    cout<<"enter marks for b ";
    cin>>b;
    cout<<"enter for marks c ";
    cin>>c;
    if(a<b){
        if(a<c){
            cout<<"a has least marks";
        }
        else{
            cout<<"c has least marks";
        }
    }
    else if(b<a){
        if(b<c){
            cout<<"b has least marks";
        }
        else{
            cout<<"c has least marks";
        }
    }
    else{
        cout<<"all have same marks";
    }
    return 0;
}