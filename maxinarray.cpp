#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,3,4,8,7,7,9,9,1,7,1,1,1,1,7,7,5};
    int count=0;
    int maxcount=0;
    int max=0;
    for(int i=0;i<14;i++){
    for(int j=i+1;j<14;j++){
        if(a[i]==a[j]){
            count+=1;
        }
    }
    if(maxcount<count){
        maxcount=count;
        max=a[i];

    }
    }
    cout<<"the maximum frequency number in the given  array is "<<max<<endl;
    return 0;
}