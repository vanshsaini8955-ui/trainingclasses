#include<iostream>
using namespace std;
int main(){
    int arr[5] = {12,23,26,28,19};
    int i = 0 ;
    int *p = &arr[i];
    for(i=4;i>=0;i--){
        cout<<*(p+i)<<" ";
    }
    return 0;
}