#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(6);
    cout<<binary_search(v.begin(),v.end(),6)<<endl;
    return 0;
}