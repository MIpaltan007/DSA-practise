#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int>s;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(0);
    s.insert(6);
    s.insert(6);
    s.insert(1);
    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;
    set<int>::iterator it=s.begin();
    s.erase(it);
    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;
    set<int>::iterator itr=s.find(5);
    cout<<*itr<<endl;
return 0;
}