#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[6]={1,3,2,7,11,8},i;
    for(i=0;i<6;i=i+2){
        swap(a[i],a[i+1]);
    }
    for(i=0;i<6;i++){
        cout<<" "<<a[i];
    }
    return 0;
}