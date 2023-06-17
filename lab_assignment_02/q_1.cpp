#include<bits/stdc++.h>
using namespace std;


template<class  T>
class Queue{
    public:
        T* a;
        int array_cap;
        int l,r;
        int sz;




        Queue(){
            a = new T[1];
            array_cap = 1;
            l = 0;
            r = -1;
            sz = 0;
        }
        void remove_circular(){
            if(l>r){
            T* tmp = new T[array_cap];
            int idx = 0;
            for(int i=l; i<array_cap; i++){
                tmp[idx] = a[i];
                idx++;
            }
            for(int i=0; i<=r; i++){
                tmp[idx] = a[i];
                idx++;
            }
            swap(tmp,a);
            l = 0;
            r = array_cap - 1;
            delete [] tmp;
        }


        }
        void increase_sz(){
            remove_circular();
            T* tmp = new T[array_cap*2];
            for(int i=0;i<array_cap;i++){
                tmp[i] = a[i];
            }
            swap(a,tmp);
            array_cap = array_cap*2;
            delete [] tmp;
        }

        void enqueue(T value){
           if(sz == array_cap){
            increase_sz();
           }
            r++;
            if(r ==array_cap){
                r = 0;
            }
            a[r] = value;
            sz++;
        }

        void dequeue(){
            if(sz == 0){


                cout<<"Queue is empty\n";
                return;
            }
            l++;
            if(l == array_cap){
                l = 0;
            }
            sz--;
        }

        T front(){
            if(sz == 0){
                cout<<"Queue is empty\n";
                T z;
                return z;
            }
            return a[l];
        }
        int size(){
            return sz;
        }
};
int main(){


    Queue<char> q;
    q.enqueue('Y');
    q.enqueue('h');
    q.enqueue('k');


    cout<<"Q size : "<<q.size()<<endl;
    cout<<q.front()<<endl;
    q.dequeue();
    cout<<q.front()<<endl;
    q.dequeue();
    cout<<q.front()<<endl;



    return 0;
}