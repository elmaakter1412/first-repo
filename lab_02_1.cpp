#include<bits/stdc++.h>
using namespace std;

class QUEUE{
    int *ar;
    int start;
    int end;
    int size;
    int cur_sz;

    
    public:
        
        QUEUE(){
            ar = new int[size];
            start = 0;
            end = -1;
            this->size = size;
            cur_sz = 0;
    }
        void enqueue(int value){
            if(cur_sz == 0){
                cout<<"Queue is full\n";
                return;
            }
            end++;
            end = end % size;
            ar[end] = value;
        }

        void dequeue(){
            if(cur_sz == 0){
                cout<<"Queue is full\n";
                return;
            }
            start++;
            start = start % size;
            cur_sz--;

        }
        int getsize(){
            return cur_sz;
        }

        int front(){
            if(cur_sz == 0){
                return -1;
            }
            return ar[start];
        }

};

int main(){
    QUEUE q;
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);

    cout<<"Q size : "<<q.getsize()<<endl;
    cout<<q.front()<<endl;
    q.dequeue();
    cout<<q.front()<<endl;
    q.dequeue();
    cout<<q.front()<<endl;
    
    
    return 0;

}