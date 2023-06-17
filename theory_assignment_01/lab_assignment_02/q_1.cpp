#include<bits/stdc++.h>
using namespace std;

class Queue{
    int *arr;
    int start;
    int end;
    int size;
    int curr_sz;

    public:
        queue(int size){
            arr = new int[size];
            start = 0;
            end = -1;
            this->size = size;
            curr_sz = 0;
        }

        void enqueue(int value){
            if(curr_sz == size){
                cout<<"Queue if full\n";
                return;
            }
            end++;
            end = end % size;
            arr[end] = value;
            curr_sz++;
        }

        void dequeue(){
            if(curr_sz == 0){
                cout<<"Queue is full\n";
                return;
            }
            start++;
            start = start % size;
            curr_sz--;
        }

        int getsize(){
            return curr_sz;
        }

        int front(){
            if(curr_sz == 0){
                return -1;
            }
            return arr[start];
        }
};
int main(){
    Queue q;
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);

    cout<<"Q size : "<<q.getsize()<<endl;
    cout<<q.front()<<endl;
    q.dequeue();
    cout<<q.front()<<endl;
    q.dequeue();
    cout<<q.front()<<endl;
    q.dequeue();

    cout<<"Q size : "<<q.getsize()<<endl;
}