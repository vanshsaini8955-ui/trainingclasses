#include<iostream>
using namespace std;
bool inprime (int n){
    if(n<2) return false ;
    for(int i = 2;i<=n/2;i++)
        if(n%i==0) 
        return false ;
    return true ;
}
int main(){
    int n ;
    cout<<"enter the value of n "<<endl;
    cin>>n;
    cout<<inprime(n);
    return 0;
}