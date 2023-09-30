#include <bits/stdc++.h>
using namespace std;
int main(){
    array<int,5> arr={1,3,2,4,5};
    int i,n=arr.size();
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    sort(arr.begin(),arr.end());
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    array<int,10> fives;
    fives.fill(5);
    for(int x:fives){
        cout<<x<<" ";
    }
    return 0;
}