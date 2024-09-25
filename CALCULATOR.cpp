#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"ENTER TWO NUMBERS :"<<endl;
    cin>>a>>b;
    cout<<"ENTER YOUR CHOISE :"<<endl<<"1.ADDITION"<<endl<<"2.SUBSTRACTION"<<endl<<"3.MULTIPICATION"<<endl<<"4.DIVISION"<<endl;
    int choise;
    cin>>choise;
    switch (choise){
        case 1:
        cout<<"the Additon of "<<a<<" and "<<b<<" is "<<(float)(a+b);
        break;
        case 2:
        cout<<"the SUBSRTATION of "<<a<<" and "<<b<<" is "<<(float)(a-b);
        break;
        case 3:
        cout<<"the MULTIPOICATION of "<<a<<" and "<<b<<" is "<<(float)(a*b);
        break;
        case 4:
        cout<<"the DIVISION of "<<a<<" and "<<b<<" is "<<(float)(a/b);
        break;
        default :
        cout<<"SORRY YOU HAVE ENETRED WRONG "<<endl;
        break;
    }
return 0;
}
