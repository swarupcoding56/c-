#include<iostream>
#include<cstring>
#include<string>

using namespace std;
int main(){
    char p[100];char c;
    cout <<"enter a string :  ";
    cin >> p;
    cout<<"enter the  word you want to find within the string : ";
    cin>>c;
    int l=strlen(p);
    int a=0;
    for(int i=0;i<l;i++){
        {
            if(p[i]==c){
                cout<<"the word "<<c<<" is present in the given string ";
                a=1;
            }
        }
    }
    if(a==0){
        cout<<"the word "<<c<<" is not present in the given string "<<endl;
    }
    return 0;
}
