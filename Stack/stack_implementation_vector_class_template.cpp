#include<iostream>
#include<vector>
using namespace std;

template<class T>
class Stack{
    vector<T> vec;
    public:
    void push(T val){
        vec.push_back(val);
    }
    void pop(){
        if(isEmpty()){
            cout<<"Stack is empty.\n";
            return;
        }
        vec.pop_back();
    }
    T top(){
        // if(isEmpty()){
        //     cout<<"Stack is empty.\n";
        //     return -1;
        // }
        int lastIdx=vec.size()-1;
        return vec[lastIdx];
    }

    bool isEmpty()
    {
        return vec.size()==0;
    }



};


int main(){
    Stack<int> s;
    s.push(3);
    s.push(2);
    s.push(1);
    s.pop();
    

    while(!s.isEmpty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<"\n-------------\n";
    Stack<char> b;
    b.push('a');
    b.push('b');
    b.push('c');
    b.pop();
    

    while(!b.isEmpty()){
        cout<<b.top()<<" ";
        b.pop();
    }
    return 0;
}