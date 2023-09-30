#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        if(a[i]%2==1){
            j=i+1;
            if(a[j]%2==0){
                swap(a[i],a[j]);
            }
            j++;
        }
    }
    for(i=0;i<n;i++){
            cout<<""<<a[i];
        }
        return 0;
}