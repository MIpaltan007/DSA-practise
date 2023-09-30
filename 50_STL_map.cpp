#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,string>mp;
    mp[1]="Surya";
    mp[2]="Kumar";
    mp[3]="Yadav";
    for(auto i:mp){
        cout<<i.first<<endl;
    }
    mp.insert({5,"SKY"});
    for(auto i:mp){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<mp.count(5)<<endl;
    mp.erase(3);
     for(auto i:mp){
        cout<<i.first<<" "<<i.second<<endl;
    }
    auto it=mp.find(2);
    for(auto i=it;i!=mp.end();i++){
        cout<<(*i).first<<endl;
    }

    return 0;
}