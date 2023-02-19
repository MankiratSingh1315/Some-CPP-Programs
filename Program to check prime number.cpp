//program to check if a number is prime or not
#include<iostream>
using namespace std;

int main(){
	int n,i;
	cout<<"Enter a number : ";
	cin>>n;
	
	for(i=2;i<n;i++){
		if(n%i==0){
			i=0;
			break;
		}else{
			continue;
		}
	}
	
	if(i==0){
		cout<<"Number is not prime";
	}else{
		cout<<"Number is prime";
	}
}
