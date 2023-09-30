#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    int a=n*n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cout<<a<<" ";
            a--;
        }
        cout<<endl;
    }
    return 0;
}
/*
16 15 14 13
12 11 10 9
8 7 6 5
4 3 2 1
*/