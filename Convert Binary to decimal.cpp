#include<iostream>
#include<math.h>
using namespace std;

int digits(long int n){
    int digits=0;
    while(n!=0){
        digits++;
        n/=10;
    }
    return digits;
}

int decimal(int n){
    int decimal=0,digit=digits(n);
    
    for(int i=0;i<=digit;i++){
        decimal+=(n%10)* int(pow(2,i));
        n/=10;
    }
    return decimal;
}

int main(){
    cout<<decimal(1101);
}