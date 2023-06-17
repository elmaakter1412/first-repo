#include<bits/stdc++.h>
using namespace std;


int main(){
    queue<int>q;
    //enqueue O(1)
    q.push(5);
    q.push(10);
    q.push(15);

    //size O(1)
    cout<<"Queue size : "<<q.size()<<endl;
    //empty
    cout<<q.empty()<<endl;

    //front O(1)
    cout<<q.front()<<endl;

    //dequeue O(1)
    q.pop();

    cout<<q.front()<<endl;
    q.pop();

    cout<<q.front()<<endl;
    q.pop();

    cout<<q.empty()<<endl;

    queue<char>q2;
    q2.push('a');
    q2.push('b');
    q2.push('c');

    cout<<q2.front()<<endl;

    q2.pop();

    cout<<q2.front()<<endl;
    q2.pop();

    cout<<q2.front()<<endl;
    q2.pop();



}