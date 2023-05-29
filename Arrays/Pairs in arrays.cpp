#include <iostream>
using namespace std;

int pairs(int arr[],int size){
    int totalPairs=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            ++totalPairs;
            cout<<"("<<arr[i]<<","<<arr[j]<<") ";
        }
        cout<<endl;
    }
    return totalPairs;
}

int main(){
    int array[]={1,2,3,4,5};
    int N=sizeof(array)/sizeof(array[0]);
    cout<<pairs(array,N);
}