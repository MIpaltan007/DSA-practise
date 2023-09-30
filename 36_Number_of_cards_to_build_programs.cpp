#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,a=3,b=5;
    cin>>n;
    int dp[n];
    dp[0]=2;
    for(i=1;i<n;i++){
        dp[i]=dp[i-1]+b;
        b=b+a;
    }
    cout<<""<<dp[n-1];
    return 0;
}