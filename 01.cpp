#include<iostream>
using namespace std;
int main(){
    int n;
    cout <<"enter age : "<<endl;
    cin>>n;
    if(18<n<60){
        cout<<"you are eligible";
    }
    else if(n<18){
        cout<<"you are not eligible";
    }
    else{
        cout<<"ye budhha mere bich m bhot bolta h";
    }
    char ch;
    cout<<"enter character : "<<endl;
    cin>>ch;
    if(ch>'A' && ch<'Z'){
        cout<<"this is uppercase"<<endl;
    }
    else if(ch>'a' && ch<'z'){
        cout<<"this is lowercase"<<endl;
    }
    else{
        cout<<"this is numeric case !!"<<endl;
    }
}