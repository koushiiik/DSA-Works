#include<iostream>
#include<deque>
using namespace std;

class Stack{
    deque<int>d;
    public:
    void push(int data){
        d.push_front(data);
    }
    void pop(){
        if(empty()){
            cout<<"Stack is empty\n";
            return;
        }
        d.pop_front();
    }
    int top(){
    if(empty()){
        cout << "Stack is empty\n";
        return -1 ;  
    }
    return d.front();
}
    bool empty(){
        return d.empty();
    }
};
int main()
{
    Stack s;
    s.pop();
    cout<<s.top();
    s.push(1);
    s.push(2);
    s.push(3);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }        
    return 0;
}