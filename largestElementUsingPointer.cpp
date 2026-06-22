#include<iostream>
using namespace std;
int main(){
    int arr[6] = {14,25,36,47,58,69};
    int i  = 0 ;
    int *p = &arr[i];
    int max = *(p+i) ;
    for(i=0;i<=5;i++){
        if(max<*(p+i)){
            max = *(p+i);
        }
    }
    for(i=0;i<=5;i++){
        cout<<*(p+i)<<" ";
    }
    cout<<"\nMAX IS "<<max<<endl;
    return 0;
}