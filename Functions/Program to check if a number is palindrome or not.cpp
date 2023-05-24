#include<iostream>
#include<math.h>
using namespace std;

//function to count number of digits
int digits(int n){
    int count=0;
    while(n>0){
        count++;
        n/=10;
    }
    return count;
}

bool isPalin(int n){
    int num=n;
    int revNum=0;
    
    for(int i=digits(n)-1;i>=0 && num!=0;i--){
        revNum+=(num%10)*pow(10,i);
        num/=10;
    }

    //another way
    // while(num>0){
    //     revNum=revNum*10+num%10;
    //     num/=10;
    // }

    if(revNum==n)
        return true;
    else
        return false;
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(isPalin(n))
        cout<<"Palindrome";
    else
        cout<<"Not Palindrome";
}