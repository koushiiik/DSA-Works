#include<iostream>
#include<queue>
using namespace std;
void interleave(queue <int> &org){
    queue<int>first;
    int n=org.size();
    for (int i=0;i<n/2;i++){
        first.push(org.front());
        org.pop();
    }
    while(!first.empty()){
        org.push(first.front());
        first.pop();
        org.push(org.front());
        org.pop();
    }
    
}


int main(){
queue<int> q;
for(int i=1;i<=10;i++){
    q.push(i);
}
interleave(q);
while(!q.empty()){
    cout<<q.front()<<endl;
    q.pop();

}
    return 0;
}