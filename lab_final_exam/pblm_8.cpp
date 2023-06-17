#include<bits/stdc++.h>
using namespace std;

class MaxHeap{
    public:
        vector<int> nodes;
        MaxHeap(){};

        void up_heapify(int idx){
            while(idx > 0 && nodes[idx] > nodes[(idx - 1)/2]){
                swap(nodes[idx], nodes[(idx - 1) / 2]);
                idx = (idx - 1) / 2;
            }
        }

        void insert(int x){
            nodes.push_back(x);
            up_heapify(nodes.size() - 1);
        }
        void printf_heap(){
            for (int i = 0; i < nodes.size();i++){
                cout << nodes[i] << " ";
            }
            cout << "\n";
        }

        void down_heapify(int idx){
            while(1){
                int largest = idx;
                int l = 2 * idx + 1;
                int r = 2 * idx + 2;
                if (l < nodes.size() && nodes[largest] < nodes[l]){
                    largest = l;
                }
                if(r < nodes.size() && nodes[largest] < nodes[r]){
                    largest = r;
                }
                if(largest == idx){
                    break;
                }
                idx = largest;
            }
        }
        void deleting(int idx){
            if(idx >= nodes.size() && idx < 0)
                return;
            swap(nodes[idx], nodes[nodes.size() - 1]);
            nodes.pop_back();
            down_heapify(idx);
        }
        int extract_max(){
            if(nodes.empty()){
                return -1;
            }
            int mx = nodes[0];
            deleting(0);
            return mx;
        }
};

class MinHeap{
public:
    MaxHeap mx;
    void insert(int x){
        mx.insert(-x);
    }

    void Delete(int idx){
        mx.deleting(idx);
    }

    int getMin(){
        return -mx.extract_max();
    }
};



int main(){
        MinHeap h;
        h.insert(4);
        h.insert(7);
        h.insert(9);
        h.insert(1);
        h.insert(10);
        cout << h.getMin() << "\n";
        return 0;
}