#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n,c,a,b;
    cin>>n;
    for(i=1;i<=2*n-1;i++){
        for(j=1;j<=2*n-1;j++){
            c=n,a=1,b=2*n-1;
            if(i==a||i==b||j==a||j==b){
                cout<<""<<c;
                c--;
            a++;
            b--;
            }
            else{
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
    return 0;
}