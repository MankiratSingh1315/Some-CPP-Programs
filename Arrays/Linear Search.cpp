#include <iostream>
using namespace std;

int linear_search(int arr[],int n,int size){
    for( int i=0 ; i < size ; i++ ){
        if(arr[i]==n){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[]={2,3,5,7,4,1,6,8};
    int N=sizeof(arr)/sizeof(arr[0]);
    int n=1;
    linear_search(arr,n,N)==-1?cout<<"Element not found":cout<<"Element at index "<<linear_search(arr,n,N);
    return 0;
}