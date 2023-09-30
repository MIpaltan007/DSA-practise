#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    for(i=1;i<=2*n;i++){
        for(j=1;j<=2*n-1;j++){
            if(i==1||i==2*n||j==1){
                cout<<"*";
            }
            else if(i<=n){
                if(abs(i-j)<=n-2 && i+j>=n+2){
                    cout<<" ";
                }
                else{
                    cout<<"*";
                }
            }
            /*else if(i>n){
                if(i-j<=4 && )
            }*/
        }
        cout<<endl;
    }
}