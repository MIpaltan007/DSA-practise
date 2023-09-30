#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,t;
    cin>>n;
    cin>>i;
    vector<int>a;
    while(n){
      t=n%2;
      a.push_back(t);
      n/=2;
    }
    if(a[i-1]==1){
        cout<<"Set"<<endl;
    }
    else{
        cout<<"Not Set"<<endl;
    }
    return 0;
    
}