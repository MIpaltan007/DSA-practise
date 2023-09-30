#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n,r=1;
    cin>>n;
    int end=2*n-1;
    for(i=1;i<=2*n-1;i++){
        for(j=1;j<=2*n-1;j++){
            if(j==r||i==r||i==end||j==end){
                cout<<" "<<n;
                r++;
                n--;
            }
        }
        cout<<endl;
    }
    return 0;
}