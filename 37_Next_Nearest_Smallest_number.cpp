#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n],i,x;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    stack<int> s;
    s.push(arr[n-1]);
    arr[n-1]=-1;
    for(i=n-2;i>=0;i--){
       x=arr[i];
       if(x>s.top()){
        arr[i]=s.top();
        s.push(arr[i]);
       }
       else{
        s.pop();
       }
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}