#include<iostream>
using namespace std;

int getLargest(int arr[],int size){
    int largest=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    return largest;
}

int main(){
    int arr[]={2,3,5,7,8,1,6,8};
    int N=sizeof(arr)/sizeof(arr[0]);
    cout<<getLargest(arr,N);
}