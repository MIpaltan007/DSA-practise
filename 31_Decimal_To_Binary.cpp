#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,bit=0,i;
    cin>>n;
    vector<int> arr;
    while(n!=0){
    /* bit=n%2;
     arr.push_back(bit);
     n/=2;
     */
    bit=n&1;
    arr.push_back(bit);
    n=n>>1;
    }
    for(i=arr.size()-1;i>=0;i--){
      cout<<""<<arr[i];
    }
    return 0;

}