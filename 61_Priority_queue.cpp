#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={12,30,90,11,2};
    int n=sizeof(arr)/sizeof(int);

    //For Max-Heap
    //priority_queue<int> heap;

    //For Min-Heap
    priority_queue<int,vector<int>,greater<int>> heap;

    for(auto x:arr){
        heap.push(x);
    }
    while(!heap.empty()){
        cout<<heap.top()<<" ";
        heap.pop();
    }
    return 0;
}