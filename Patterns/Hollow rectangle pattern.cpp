#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=4;i++){
        for(int j=1;j<=7;j++){
            if(i==1 || i==4 || j==1 || j==7/*beacuse (1,1)(1,7)(4,1)(4,7) are corners and stars are to be printed between them*/){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}