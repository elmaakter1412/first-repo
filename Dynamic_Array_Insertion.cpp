#include<bits/stdc++.h>
using namespace std;
//Memory complexity = o(n)

class Array{
private:
    int* arr;
    int cap;
    int sz;
    void Increase_size(){
        cap = cap*2;
        int* tmp = new int[cap];
    }
public:
    Array(){
        arr = new int[1];
        cap = 1;
        sz = 0;

//Time Complexity = o(1)
    }
    void Push_back(int x){
        if(cap==sz){
            Increase_size();
        }
        arr[sz] = x;
        sz++;
    }
    //o(sz-pos) o(sz)
    void Insert(int pos,int x){
        if(cap==sz){
            Increase_size();
        }
        for(int i=sz-1;i>=pos;i--){
            arr[i+1] == arr[i];
        }
        arr[pos] = x;
        sz++;
    }
    //o(sz)
    void print(){
        for(int i=0;i<sz;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    //o(1)
    int getSize(){
        return sz;
    }
    //o(1)
    int getElement(int idx){
        if(idx>=sz){
            cout<<"Error "<<idx<<" is out of bound!\n";
            return -1;
        }
        return arr[idx];
    }
};
int main(){
    Array a;
    a.Push_back(10);
    a.Push_back(20);
    a.Push_back(30);
    a.Push_back(40);
    a.Push_back(50);
    a.Insert(1,5);

    a.print();
    cout<<a.getSize()<<"\n";

    for(int i=0;i<a.getSize();i++){
        cout<<a.getElement(i)<<endl;

    }

    
    return 0;
}