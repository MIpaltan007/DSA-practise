#include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int>maxi;
    priority_queue<int,vector<int>,greater<int>>mini;
    maxi.push(1);
    maxi.push(0);
    maxi.push(3);
    maxi.push(2);
    int i,n=maxi.size();
    for(i=0;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;
    mini.push(10);
    mini.push(3);
    mini.push(4);
    mini.push(0);
    mini.push(15);
    int m=mini.size();
    for(i=0;i<m;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }
    cout<<endl;
    cout<<"Is the Priority Queue for max heap empty ???"<<maxi.empty();
    return 0;

}