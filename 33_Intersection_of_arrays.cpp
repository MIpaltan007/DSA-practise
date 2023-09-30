/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    int arr[5]={1,2,3,4,6};
    int a[4]={5,5,5,4};
    int i,j=1,e=1,k;
    for(i=1;i<5;i++){
        if(arr[i]!=arr[i-1]){
            arr[j]=arr[i];
            j++;
        }
    }
    arr[j]=arr[4];
     for(i=1;i<4;i++){
        if(a[i]!=a[i-1]){
            a[e]=a[i];
            e++;
        }
    }
    a[e]=a[3];
    for(i=0;i<j;i++){
        for(k=0;k<e;k++){
            if(arr[i]==a[k]){
                cout<<arr[i]<<" ";
            }
        }
    }
    return 0;

}
*/
#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int arr[5] = {1, 2, 2, 3, 4};
    int a[4] = {2, 2, 2, 4};
    unordered_set<int> setA(arr, arr + 5);

    for (int i = 0; i < 4; i++) {
        if (setA.find(a[i]) != setA.end()) {
            cout << " " << a[i];
            setA.erase(a[i]); // To handle duplicate elements in 'a'
        }
    }
    return 0;
}