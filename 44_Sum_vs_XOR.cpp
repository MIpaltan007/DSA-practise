#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n,c=0;
    cin>>n;
    for(i=0;i<n;i++){
        if((n+i)==(n^i)){
           c++;
        }
    }
    cout<<""<<c<<endl;
    return 0;
}