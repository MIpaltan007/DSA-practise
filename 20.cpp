#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n,value;
    cin>>n;
    for(i=1;i<=n;i++){
        value=i;
        for(j=1;j<=n;j++){
            if(i+j<=2*i){
                cout<<value<<" ";
                value=value-1;
            }
        }
        cout<<endl;
    }
    return 0;
}
/*
1
21
321
4321
*/