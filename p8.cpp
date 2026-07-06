#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(b>a){
        if(b>c){
            cout<<"b"<<endl;
        }
        else{
            cout<<"c"<<endl;
        }
    }
    else{
        cout<<a;
    }
    return 0;
}