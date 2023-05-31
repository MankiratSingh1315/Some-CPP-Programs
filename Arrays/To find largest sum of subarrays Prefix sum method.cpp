#include <iostream>
using namespace std;

int LargestSumOfSubarrayPrefixSumMethod(int arr[],int size){
	int prefixArr[size];
	prefixArr[0]=arr[0];
	for(int i=1;i<size;i++){
		prefixArr[i]=prefixArr[i-1]+arr[i];
	}
	
	int largest=INT_MIN;

	for(int i=0;i<size;i++){
		for(int j=i;j<size;j++){
			int sum = i==0 ? prefixArr[j] : prefixArr[j]-prefixArr[i-1];
			if(largest < sum){
				largest=sum;
			}
		}
	}

	return largest;
}

int main(){
	int arr[]={2,4,6,8,10};
	int N=sizeof(arr)/sizeof(arr[0]);
	cout<<LargestSumOfSubarrayPrefixSumMethod(arr,N);
}
