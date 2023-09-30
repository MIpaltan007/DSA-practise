#include<bits/stdc++.h>
using namespace std;
int main(){

    //Empty Container Constructor
    vector<int> first;

    //Fill Constructor(4 Integers with value 20)
    vector<int> second(4,20);

    //Range Constructor
    int num[]={10,20,30,40};
    vector<int> third(num,num+4);

    //Copy Constructor
    vector<int> fourth(third);

    //Another Way
    vector<int> fifth={1,2,3,4};

    return 0;
}