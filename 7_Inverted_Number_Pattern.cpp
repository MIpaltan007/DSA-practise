#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i+j>n+1){
                cout<<" ";
            }
            else{
                cout<<j<<"";
            }
        }
        cout<<endl;
    }
    return 0;
}
/*
12345
1234 
123  
12   
1    
*/