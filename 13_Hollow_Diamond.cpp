#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    for(i=1;i<=2*n;i++){
        for(j=1;j<=2*n-1;j++){
            if(i<=n){
                if(i+j==n+1||j-i==n-1){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
            else if(i>n){
                if(i-j==n||i+j==3*n){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}

/*
    *
   * *
  *   *
 *     *
*       *
*       *
 *     *
  *   *
   * *
    *
*/