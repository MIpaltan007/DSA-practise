#include<bits/stdc++.h>
using namespace std;
int main(){
    deque<int> first; //Empty deque
    deque<int> second(4,100); //Deque with 4 elements all with value 100
    deque<int> third(second.begin(),second.end()); //Iterating through second deque
    deque<int> fourth(third);  //Copy of third deque

    int arr[]={13,332,53};
    int n=sizeof(arr)/sizeof(int);
    deque<int> fifth(arr,arr+n);

    deque<int> sq(10);
    int i;
    for(i=0;i<10;i++){
        sq.at(i)=i*i;
    }
    for(auto x:sq){
        cout<<x<<" ";
    }
    return 0;
}