#include<iostream>
using namespace std;

int kadanes(int arr[],int size){
    int max=INT_MIN;
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
        if(sum<0){
            sum=0;
        }
        max= sum>max ? sum : max;
    }
    return max;
}

int kadanesForNegative(int arr[],int size){
    int max=INT_MIN;
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
        if(sum>0){
            sum=0;
        }
        max= sum>max ? sum : max;
    }
    return max;
}

int main(){ 
	int arr[]={2,4,-6,8,-10};
	int N=sizeof(arr)/sizeof(arr[0]);
	cout<<"\nLargest is "<<kadanes(arr,N);

    int arr2[]={-2,-4,-6,-8,-10};
	N=sizeof(arr2)/sizeof(arr2[0]);
	cout<<"\nLargest is "<<kadanesForNegative(arr2,N);
}