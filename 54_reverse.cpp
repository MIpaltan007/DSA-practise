#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[5],i;
    for(i=0;i<5;i++){
        cin>>a[i];
    }
    reverse(a,a+5);
    for(i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}