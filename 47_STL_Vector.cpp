#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    cout<<"Size="<<v.size()<<endl;
    cout<<"2nd Index="<<v.at(2)<<endl;
    cout<<"1st Element"<<v.front()<<endl;
    cout<<"Last Element"<<v.back()<<endl;
    cout<<"BEfore Pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    v.pop_back();
    cout<<"After Pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
}