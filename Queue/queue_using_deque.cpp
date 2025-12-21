#include<iostream>
#include<deque>
using namespace std;

class Queue{
    deque<int>d;
public:
    void push(int data){
        d.push_back(data);
    }
    void pop(){
        if(empty()){
            cout<<"Queue is empty";
            return;
        }
        d.pop_front();
    }
    int front(){
        return d.front();
    }
    bool empty(){
        return d.empty();
    }

};
int main(){
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
    return 0;
}