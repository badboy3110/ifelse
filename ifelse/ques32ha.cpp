#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter amount ";
    cin>>n;
    int n500,n200,n100,n50,n20,n10,n5,n2,n1;
     n500=n200=n100=n50=n20=n10=n5=n2=n1=0;

    switch(n>=500){
        case 1:
        n500=n500+n/500;
        n=n-n500*500;
        break;
    }
    switch(n>=200){
        case 1:
        n200=n200+n/200;
        n=n-n200*200;
        break;
    }
    switch(n>=100){
        case 1:
        n100=n100+n/100;
        n=n-n100*100;
        break;
    }
    switch(n>=50){
        case 1:
        n50=n50+n/50;
        n=n-n50*50;
        break;
    }
    switch(n>=20){
        case 1:
        n20=n20+n/20;
        n=n-n20*20;
        break;
    }
    switch(n>=10){
        case 1:
        n10=n10+n/10;
        n=n-n10*10;
        break;
    }
    switch(n>=5){
        case 1:
        n5=n5+n/5;
        n=n-n5*5;
        break;
    }
    switch(n>=2){
        case 1:
        n2=n2+n/2;
        n=n-n2*2;
        break;
    }
    switch(n>=1){
        case 1:
        n500=n1+n/1;
        n=n-n1*1;
        break;
    }
    cout<<"no of notes of 500 are"<<n500<<endl;
    cout<<"no of notes of 200 are"<<n200<<endl;
    cout<<"no of notes of 100 are"<<n100<<endl;
    cout<<"no of notes of 50 are"<<n50<<endl;
    cout<<"no of notes of 20 are"<<n20<<endl;
    cout<<"no of notes of 10 are"<<n10<<endl;
    cout<<"no of notes of 5 are"<<n5<<endl;
    cout<<"no of notes of 2 are"<<n2<<endl;
    cout<<"no of notes of 1 are"<<n1<<endl;
}