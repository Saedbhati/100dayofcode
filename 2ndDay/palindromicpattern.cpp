#include<iostream>
using namespace std;

int main(){
    for(int i=1;i<=5;i++){
        for(int j=0;j<5-i;j++){
            cout<<" ";
        }
        for(int j=5;j>=1;j--){
            if(j<=i){
                cout<<j;
            }
            
        }
        for(int j=2;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }

    return 0;
}