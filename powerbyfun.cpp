#include<iostream>
using namespace std;
int power(int a , int b ){
    int power = 1 ;
    for(int i = 1 ; i<=b;i++){
        power = power *  i ;
    }
    return power;
}
int main(){
    int a ;
    cout<<"enter the value of a ";
    cin>>a;
    int b ;
    cout<<"enter the value of b ";
    cin>>b;
    cout<<"the "<<a<<" to the power of "<<b<<" is "<<power(a,b);
    return 0;
}