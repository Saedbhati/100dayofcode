#include<iostream>
using namespace std;

int main(){
    int n=4;
    for(int i=1;i<=n;i++){
        for(int j=0;j<2*n;j++){
            if(j<i){
                cout<<"*";
            }else if(j>((2*n)-1)-i){
                cout<<"*";

            }
            
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }for(int i=n;i<=2*n-1;i++){
        for(int j=0;j<2*n;j++){
            if(j>i){
                cout<<"*";
            }else if(j<((2*n)-1)-i){
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