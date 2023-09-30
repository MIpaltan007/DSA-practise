#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter n"<<endl;
    cin>>n;
    int a=0,b=1,c;
    for(i=2;i<=n;i++){
c=a+b;
a=b;
b=c;
    }
    cout<<c<<""<<endl;
    return 0;
}