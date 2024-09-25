#include<iostream>
using namespace std;
 void calculator(int,int,char);
void calculator(int n,int m,char c){
 if(c=='+')
 cout<<"the addition of "<<n<<" and "<<m<<" is "<<n+m;
 else if(c=='-')
 cout<<"the substraction of "<<n<<" and "<<m<<" is "<<n-m;
else if(c=='/')
cout<<"the division of "<<n<<" and "<<m<<" is "<<(float)n+m;
else if(c=='*')
cout<<"the multipication of "<<n<<" and "<<m<<" is "<<n*m;
else if(c=='^'){
    int power=1;
    for(int i=1;i<=m;i++){
     power =n*power;
    }
    cout<<n<<" raised to the power "<<m<<" is "<<power;
}
else 
cout<<"OOPS YOU HAVE ENTERED WRONG ";
return;
}
int main(){
    int n;char c;int m;
    cout<<"enter two numbers :"<<endl;
    cin>>n>>m;
    cout<<"choose a character: "<<endl<<"+"<<endl<<"-"<<endl<<"/"<<endl<<"*"<<endl<<"^"<<endl;
    cin >>c;
    calculator(n,m,c);
    return 0;
}