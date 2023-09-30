#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n,i,j=1,e=1,k;
    cin>>m>>n;
    int arr1[m],arr2[n];
    for(i=0;i<m;i++){
        cin>>arr1[i];
    }
    for(i=0;i<n;i++){
        cin>>arr2[i];
    }
    for(i=m;i<m+n;i++){
        arr1[m]=arr2[m-i];
    }
    for(i=1;i<m+n;i++){
        if(arr1[i]!=arr1[i-1]){
            arr1[j]=arr1[i];
            j++;
        }
    }
    arr1[j]=arr1[m+n-1];
    for(i=0;i<j;i++){
        cout<<" "<<arr1[i];
    }
    return 0;

}