#include<iostream>
using namespace std;
int min(int m,int n){
    if(m>n)return n;
    else return m;
}
int main(){
    int a,b;
    cout<<"enter two numbers :"<<endl;
    cin>>a>>b;
    for(int i=min(a,b);i>=1;i--){
        if(a%i==0 && b%i==0){
            cout<<"the gcd of "<<a<<" and "<<b<<" is "<<i<<endl;
            break;
        }
    }
     return 0;
    }