#include<iostream>
using namespace std;
int main(){
    int n=8;//Here n is the number of lines in our pattern
    for(int i=1;i<=n/2;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }

        for(int j=1;j<=n-2*i;j++){
            cout<<" ";
        }

        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i=n/2;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }

        for(int j=1;j<=n-2*i;j++){
            cout<<" ";
        }

        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}