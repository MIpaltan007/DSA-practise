#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n,v;
    cin>>n;
    for(i=1;i<=n;i++){
        v=i;
        for(j=1;j<=n;j++){
            if(i+j<=2*i){
               cout<<""<<(char)(64+v);
               v=v-1;
            }
        }
        cout<<endl;
    }
    return 0;
}
/*
A
BA
CBA
DCBA
*/