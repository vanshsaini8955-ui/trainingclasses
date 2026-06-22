#include<iostream>
using namespace std;
int main(){
    int arr[5] = {12,13,14,15,16};
    int i = 0 ;
    int *p = &arr[i];
    for(i=0;i<=4;i++){
        cout<<*(p+i)<<" ";

    }
    return 0;
}