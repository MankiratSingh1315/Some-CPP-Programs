//program to reverse a number
#include<iostream>
#include<math.h>
using namespace std;

int digits(int r){
	
	//function to find number of digits in a given number
	
	int i;
	for(i=0;r!=0;i++){
		r/=10;
	}
	return i;
}

int rev(int b, int digit){
	int c=b%10;//extracts units place digit from b and stores it in c
	
	if(b!=0){
		b/=10;//removes units place digit from b
		return c*pow(10,digit-1)+rev(b,digits(b));
	}else{
		return 0;
	}
}

int main(){
	cout<<"Enter a number : ";
	int n;
	cin>>n;
	cout<<"\n"<<rev(n,digits(n));
}





