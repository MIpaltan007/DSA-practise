#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,res=1;
    cin>>a>>b;
    while(a&&b){
        if(a&1==1){
            if(b&1==1){
                res=res*2;
            }
            else{
                cout<<"0";
            }
        }
        a=a>>1;
        b=b>>1;
    }
    cout<<""<<res<<endl;
    return 0;
}