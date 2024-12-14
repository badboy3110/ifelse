#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter the charracter ";
    cin>>ch;
    int d=(int)ch;
if(d>=65 && d<=90 || d>=97 && d<=122){
    if(d==97||d==105||d==101||d==111||d==117||d==65||d==69||d==73||d==79||d==85){
        cout<<"the charracter is vowel";
    }
    else{
        cout<<"the charracter is consonants";
    }
}
else{
    cout<<"the charracter is neither consonant nor vowel";
}
return 0;
}