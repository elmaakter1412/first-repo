#include<bits/stdc++.h>
using namespace std;

class Max_Heap{
public:
    vector<int>nodes;

    Max_Heap(){

    }
    void up_heapify(int idx){
        while(idx > 0 && nodes[idx] > nodes[(idx-1)/2]){
            swap(nodes[idx], nodes[(idx-1)/2]);
            idx = (idx-1)/2;
        }
    }
    void insert(int x){
        nodes.push_back(x);
        up_heapify(nodes.size() - 1);
    }
    void print_heap(){
        for(int i=0; i<nodes.size(); i++){
            cout<<nodes[i]<<" ";
        }
        cout<<endl;
    }
    void down_heapify(int idx){
        while(1){
            int largest = idx;
            int l = 2*idx + 1;
            int r = 2*idx + 2;
            if(l<nodes.size() && nodes[largest] < nodes[l]){
                largest = l;
            }
            if(r<nodes.size() && nodes[largest] < nodes[r]){
                largest = r;
            }
            if(largest == idx){
                break;
            }
            swap(nodes[idx] , nodes[largest]);
            idx = largest;
        }
    }
    void Delete(int idx){
        if(idx >= nodes.size()){
            return;
        }
        swap(nodes[idx], nodes[nodes.size()-1]);
        nodes.pop_back();
        down_heapify(idx);
    }
    int get_Max(){
        if(nodes.empty()){
            cout<<"Heap is empty"<<endl;
            return -1;
        }
        return nodes[0];
    }
};

class MinHeap{
public:
    Max_Heap mx;
    void insert(int x)
    {
        mx.insert(-x);
    }
    void Delete(int idx)
    {
        mx.Delete(idx);
    }
    int getMin()
    {
        return -mx.get_Max();
    }
};

int main()
{
    MinHeap minHeap;
    minHeap.insert(3);
    minHeap.insert(2);
    minHeap.insert(1);
    cout<<minHeap.getMin()<<endl;
    minHeap.Delete(0);
    cout<<minHeap.getMin()<<endl;
    return 0;
}
