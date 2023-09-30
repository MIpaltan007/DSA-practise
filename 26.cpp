#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n,v;
    cin>>n;
    for(i=1;i<=n;i++){
        v=n-i+1;//Hmmm... kaise kar leta hu, me
        for(j=1;j<=n;j++){
            if(i+j<=2*i){
               cout<<""<<(char)(64+v);
               v=v+1;
            }
        }
        cout<<endl;
    }
    return 0;
}
/*
D
CD
BCD
ABCD
*/