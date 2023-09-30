#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i+j<=2*i){
            if(i==j){
                cout<<"1";
            }
            else if((i%2!=0 && j%2!=0)||(i%2==0 && j%2==0)){
                cout<<"1";
            }
            else{
                cout<<"0";
            }
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
/*
1
01
101
0101
10101
*/