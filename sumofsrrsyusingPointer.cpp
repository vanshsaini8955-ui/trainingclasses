#include<iostream>
using namespace std;
int main(){
    int arr[5] = {11,22,33,44,55};
    int i = 0 ;
    int *p = &arr[i];
    int sum = 0;
    for(i=0;i<=4;i++){
        cout<<*(p+i)<<" ";
        sum = sum + *(p+i);
    }
    cout<<"\nSUM IS : "<<sum;
    return 0;
}