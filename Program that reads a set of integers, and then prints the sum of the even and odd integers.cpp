//Program that reads a set of integers, and then prints the sum of the even and odd integers
#include<iostream>
using namespace std;
int main(){
	int n,num,even=0,odd=0;
	cout<<"How many numbers do you want to enter : ";
	cin>>num;
	
	for(int i=0;i<num;i++){
		cout<<"Enter a number : ";
		cin>>n;
		if(n%2==0){
			even+=n;
		}else{
			odd+=n;
		}
	}
	
	cout<<"\nSum of even integers : "<<even<<"\nSum of odd integers : "<<odd<<endl;
}
