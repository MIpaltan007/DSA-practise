#include<bits/stdc++.h>
using namespace std;
int main(){
    array<int,4>a={1,2,3,4};
    int s=a.size(),i;
    for(i=0;i<s;i++){
        cout<<a[i]<<endl;
    }
    cout<<"2nd element="<<a.at(2)<<endl;
    cout<<"Empty or not="<<a.empty()<<endl;
    cout<<"1st element="<<a.front()<<endl;
    cout<<"Last Element="<<a.back()<<endl;
    return 0;
}