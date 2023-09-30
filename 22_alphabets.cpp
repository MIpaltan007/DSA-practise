#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cout<<(char)(64+j)<<"";
        }
        cout<<endl;
    }
    return 0;
}
/*
ABC
ABC
ABC
*/