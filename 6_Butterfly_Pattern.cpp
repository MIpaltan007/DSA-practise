#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    for(i=1;i<=n*2;i++){
        for(j=1;j<=n*2;j++){
            if(j<=n){
                if(i<=n){
                if(i+j<=2*i){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
            else if(i>n){
                if(i+j<2*n+2){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
            }
            else if(j>n){
                if(i<=n){
                if(i+j>2*n){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
            else if(i>n){
                if(i+j>=2*i){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
            }
        }
        cout<<endl;
    }
    return 0;
}