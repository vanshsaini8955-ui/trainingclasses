#include<iostream>
using namespace std ;
int main(){
    float P , R , T , SI ;
    cout<<"enter the value of principal"<<endl;
    cin>>P;
    cout<<"enter Rate of interest "<<endl;
    cin>>R;
    cout<<"enter the time "<<endl;
    cin>>T;

    SI = (P*R*T)/100;
    cout<<SI;
    return 0;
}