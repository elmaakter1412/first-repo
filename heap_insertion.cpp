#include<bits/stdc++.h>
using namespace std;

class Max_Heap{
public:
    vector<int>nodes;

    Max_Heap(){

    }
    //O(logn)
    void up_heapify(int idx){
        while(idx > 0 && nodes[idx] > nodes[(idx-1)/2]){
            swap(nodes[idx], nodes[(idx-1)/2]);
            idx = (idx-1)/2;
        }
    }
    //O(logn)
    void insert(int x){
        nodes.push_back(x);
        up_heapify(nodes.size() - 1);
    }
    //O(n)
    void print_heap(){
        for(int i=0; i<nodes.size(); i++){
            cout<<nodes[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    Max_Heap heap;
    heap.insert(4);
    heap.insert(7);
    heap.insert(9);
    heap.insert(1);
    heap.insert(10);

    heap.print_heap();
    return 0;
}