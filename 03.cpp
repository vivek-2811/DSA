#include<iostream>
using namespace std;
// FUNCTIONS PRACTISE !!!
int hello(){
    cout<<"hello world"<<endl;
    return 69;
}
int sum(int a,int b){
    int sum=a+b;
    cout<<"sum of a and b is : "<<sum<<endl;
    return sum;
}
int minof2(int a,int b){
    if(a<b){
        return a;
    }
    else if(a=b){
        return a,b;
    }
    else{
        return b;
    }
}
int sum1n(int n){
    for(int i=1;i<=n;i++){
        i=i+0;
        cout<<" "<<i<<endl;
    }
}
int fact(int n){
    int f=1;
    for (int i=1;i<=n;i++){
        f=f*i;
    }
    cout<<"factorial is : "<<f<<endl;
    return f;
}
int passbyval(int nn){
    int x=2 * nn;
    cout<<"val of x : "<<x<<endl;
    return x;
}
int leet(int n){
    n=145;
    int ds=0;
    while(n > 0){
        int ls=n%10;
        n=n/10;
        ds=ds+ls;
    }
    return ds;
}
int factorial(int n,int r){
    int f_n=fact(n);
    int f_r=fact(r);
    int f_nmr=fact(n-r);
    int form=fact(n)/(fact(r)*fact(n-r));
    return form;
}
int main(){
    // int v=hello();
    // cout<<"return value : "<<v<<endl;
    // // this is call by value !!
    // cout<<hello()<<endl;
    // // this is call by function !!

    // cout<<sum(34,43)<<endl;
    // cout<<minof2(33,33)<<endl;

    // int n;
    // cout<<"enter n : "<<n<<endl;
    // cin>>n;
    // cout<<sum1n(n);
    // return 0;
    // cout<<"factorial of : "<<fact(5)<<endl;
    // return 0;

    // int nn=5;
    // cout<<passbyval(nn)<<endl;
    // cout<<"value of x is : "<<nn<<endl;

    // int n=145;
    // cout<<"the sum of number is : "<<leet(145)<<endl;

    cout<<"the factorial will be : "<<factorial(6,3)<<endl;
    return 0;
}