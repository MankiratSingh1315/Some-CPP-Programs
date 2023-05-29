#include<iostream>
using namespace std;

int subarrays(int arr[],int size){
    int totalSubarrays=0;
    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++){
            totalSubarrays++;
            cout<<"[";
            for(int k=i;k<=j;k++){
                if(k!=j) cout<<arr[k]<<",";
                else cout<<arr[k];
            }
            cout<<"]\t";
        }
        cout<<endl;
    }
    return totalSubarrays;
}

int main(){
    int array[]={2,4,6,8,10};
    int N=sizeof(array)/sizeof(array[0]);
    cout<<subarrays(array,N);
}