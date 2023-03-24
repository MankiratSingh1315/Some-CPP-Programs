//nCr=n!/(r! * (n-r)!)=binomial coefficient

#include<iostream>
using namespace std;

int fac(int num){
    int facto=1;
    for(int i=1;i<=num;i++){
        facto*=i;
    }
    return facto;
}

float binomialCoefficient(int n,int r){
    if(n>=r){
        return float(fac(n)/(fac(r)*fac(n-r)));
    }
}

int main(){
    cout<<binomialCoefficient(5,2);
}