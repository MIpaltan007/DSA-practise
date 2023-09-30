#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,m;
    cin>>m;
    for(i=1;i<=m;i++){
        for(j=1;j<=m-i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}