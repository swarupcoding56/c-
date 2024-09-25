#include<iostream>
using namespace std;
int isperfect(int i){
    int sum=0;int t=i;
    for(int j=1;j<=i-1;j++)
    {
        if(i%j==0)
        {
            sum+=j;
        }
        else continue;
    }
            return t==sum;
    }
int main(){
    for(int i=1;i<=500;i++){
     if(isperfect(i)){
        cout<<i<<endl;
     }
     else 
     continue;
    }
     return 0;
    }