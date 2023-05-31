#include<iostream>
using namespace std;

void sumOfElementsOfSubarrays(int arr[],int size){
    int sum=0,max=INT_MIN,min=INT_MAX;
    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++){
            sum=0;
            
            for(int k=i;k<=j;k++){
                sum+=arr[k];
            }

            if(sum>max){
                max=sum;
            }

            if(sum<min){
                min=sum;
            }

            cout<<sum<<" ";
        }
        cout<<endl;
    }

    cout<<"\nMax is "<<max<<"\nMin is "<<min<<endl;
}

int main(){
    int array[]={2,4,6,8,10};
    int N=sizeof(array)/sizeof(array[0]);
    sumOfElementsOfSubarrays(array,N);
    return 0;
}