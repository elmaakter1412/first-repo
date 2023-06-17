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
    //O(longn)
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
    //O(logn)
    void Delete(int idx){
        if(idx >= nodes.size()){
            return;
        }
        swap(nodes[idx], nodes[nodes.size()-1]);
        nodes.pop_back();
        down_heapify(idx);
    }
    //O(1)
    int get_Max(){
        if(nodes.empty()){
            cout<<"Heap is empty"<<endl;
            return -1;
        }
        return nodes[0];
    }
    //O(logn)
    int Extract_Max(){
        if(nodes.empty()){
            cout<<"Heap is empty"<<endl;
            return -1;
        }
        int ret = nodes[0];
        Delete(0);
        return ret;
    }

};
int main(){
    Max_Heap heap;
    heap.insert(4);
    heap.insert(7);
    heap.insert(9);
    heap.insert(1);
    heap.insert(10);
    heap.insert(20);
    heap.insert(30);
    cout<<"Max element = "<<heap.get_Max()<<endl;


    //heap.print_heap();
    cout<<"Max element = "<<heap.Extract_Max()<<endl;
    cout<<"Max element = "<<heap.Extract_Max()<<endl;

    
    return 0;
}