#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=2*n-1;j++){
            if(i+j<=n || j-i>=n){
                cout<<" ";
            }
            else{
                cout<<abs(j-n)+1<<"";
            }
        }
        cout<<endl;
    }
    return 0;
}
/*
   1
   212
  32123
 4321234 
543212345
*/