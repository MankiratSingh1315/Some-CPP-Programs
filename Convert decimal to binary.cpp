#include<iostream>
#include<math.h>
using namespace std;

int binary(int n){
    int binary=0,power=0;
    while(n>0){
        binary+=((n%2)*int(pow(10,power)));
        power++;
        n/=2;
    }
    //binary++;
    return binary;
}

int main(){
    cout<<binary(13);
}