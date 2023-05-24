#include<iostream>
using namespace std;

int fac(int num){
    int facto=1;
    for(int i=1;i<=num;i++){
        facto*=i;
    }
    return facto;
}

int main(){
    cout<<fac(5);
}