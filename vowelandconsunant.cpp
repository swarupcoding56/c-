#include<iostream>
#include<cstring>
#include<string>

using namespace std;
int main(){
    char p[100];char c;
    cout <<"enter a string :  ";
    cin >> p;
    int l=strlen(p);
    int a=0;int b=0;
    for(int i=0;i<l;i++){
        {
            if(p[i]=='a' || p[i]=='e'|| p[i]=='i' ||p[i]=='o' || p[i]=='u'){
        
                a++;
            }
            else b++;
        }
    }
    
        cout<<"the numebr of vowel present in the given string is "<<a<<endl;
        cout<<"the number of vowel present in the given string is "<<b<<endl;
    return 0;
}
