#include<iostream>
using namespace std;
int max(int a , int b){
    if(a>b){
        cout<<"A IS GREATEST "<<endl;
        return a;
    }
    else{
        cout<<"B IS GREATEST "<<endl;
        return b;
    }

}
int main(){
    int a ;
    cout<<"enter the value of a : "<<endl;
    cin>>a;
    int b ;
    cout<<"enter the value of b : "<<endl;
    cin>>b;
    cout<<"MAXIMUM IS "<<max(a,b)<<endl;
    return 0;
}