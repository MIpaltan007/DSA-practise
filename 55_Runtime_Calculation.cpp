#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    vector<int> arr(n,0);
    for(i=0;i<n;i++){
        arr[i]=n-i;
    }
    auto start_time = chrono::high_resolution_clock::now();
    sort(arr.begin(), arr.end());
    auto end_time = chrono::high_resolution_clock::now();
    
    auto duration = chrono::duration_cast<chrono::microseconds>(end_time - start_time);
    cout << "Time taken by function: " << duration.count() << " microseconds" << endl;
    
    return 0;
}