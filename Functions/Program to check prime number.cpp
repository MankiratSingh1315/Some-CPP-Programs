// program to check if a number is prime or not
#include <iostream>
#include<math.h>
using namespace std;

bool isPrime(int n)
{
	if(n==2){
        return true;
    }
	
	for (int i = 2; i <= sqrt(n); i++)//i<=n^1/2 because n=(n^1/2)^2 so n^1/2 is the nummber till where the factors will not repeat
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	
	return true; // this function returns true if given number is a prime number.
}

int main()
{
	int n;
	cout << "Enter a number : ";
	cin >> n;

	if (isPrime(n))
	{
		cout << n << " is a prime number";
	}
	else
	{
		cout << n << " is not a prime number";
	}
}