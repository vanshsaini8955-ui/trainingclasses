#include<iostream>
using namespace std;
int swapPointer(int *a, int *b){
    int temp ;
    temp = *a ;
    *a = *b ;
    *b = temp ;

}
int main(){
    int a ;
    cout<<"enter the value of a "<<endl;
    cin>>a;
    int b ;
    cout<<"enter the value of b "<<endl;
    cin>>b;
    swapPointer(&a,&b);
    cout<<"value of a after swaping "<<a<<endl;
    cout<<"value of b after swaping "<<b<<endl;


    return 0;
}