#include<iostream>
using namespace std;

/*
Approach 1 : Create new array, and store the last element to index zero of new one, last second to the second position of new one and so on...
Approach 2 : Swap last and first element, then second last and second element and so on...

Approach 2 is better because of better space complexity
*/

void reverse(int arr[],int size){
    for(int i=0;i<size/2;i++){
        arr[size-i-1]+=arr[i];
        arr[i]=arr[size-i-1]-arr[i];
        arr[size-i-1]-=arr[i];
    }
}

int main(){
    int array[]={1,2,3,4,5,6,7,8,9,10};
    int N=sizeof(array)/sizeof(array[0]);
    cout<<array<<endl;
    reverse(array,N);
    for(int i=0;i<N;i++){
        cout<<array[i]<<" ";
    }
}