#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<string> books;
    books.push("C++");
    books.push("JAVA");
    books.push("OS");
    books.push("DBMS");
    while(!books.empty()){
        cout<<books.top()<<" ";
        books.pop();
    }
    return 0;
}