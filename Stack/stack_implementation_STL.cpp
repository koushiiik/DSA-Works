#include<iostream>
#include<stack>
using namespace std;




int main(){
    //STL stack
    stack<int> s;
    s.push(3);
    s.push(2);
    s.push(1);
    s.pop();
    

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }

    return 0;
}