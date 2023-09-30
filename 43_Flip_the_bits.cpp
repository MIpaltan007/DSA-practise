#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int d=floor(log2(n)+1);
    int a=pow(2,d)-1;
    cout<<""<<a-n<<endl;
    return 0;
}