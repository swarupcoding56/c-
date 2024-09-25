#include<iostream>
using namespace std;
int max_two(int n,int m){
    if(n>m)return n;
    else return m;
}
int main(){
    
    int n,m;
    cout<<"enter two numbers :"<<endl;
    cin>>n>>m;
     int j=max_two(n,m);
    cout <<"the max between "<<n<<" and "<<m<<" is "<<j;  
    
    
    return 0;}