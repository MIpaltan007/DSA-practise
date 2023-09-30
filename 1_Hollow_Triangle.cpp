#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int i,j,r,c;
    cin>>r>>c;
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            if((j==1||j==c)||(i==1||i==r)){
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