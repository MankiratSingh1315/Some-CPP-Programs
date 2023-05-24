#include<iostream>
using namespace std;

int factorial(int a){
	if(a!=0 && a>=0){
	return a*factorial(a-1);
	}
	else{
	return 1;
	}
}

int main(){
	int n;
	cout<<"Enter a number to find the factorial : ";
	cin>>n;
	cout<<"Factorial of "<<n<<" is "<<factorial(n)<<endl;
}
