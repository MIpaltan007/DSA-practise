#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=0,ans=0,bit;
    while(n!=0){
         bit=n%10;
         if(bit==1){
            ans+=pow(2,i);
         }
         n/=10;
         i++;
    }
    cout<<""<<ans;
    return 0;
}