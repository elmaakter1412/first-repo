#include<bits/stdc++.h>
using namespace std;

vector<string> merge_sort(vector<string>p){
    if(p.size() <=1){
        return p;
    }

    int half = p.size() / 2;
    vector<string> a;
    vector<string> b;
    for (int i = 0; i < half;i++)
        a.push_back(p[i]);
    for (int i = half; i < p.size();i++)
        b.push_back(p[i]);

    vector<string> sort_a = merge_sort(a);
    vector<string> sort_b = merge_sort(b);

    int idx_a = 0;
    int idx_b = 0;
    vector<string> q;
    for (int i = 0; i < p.size();i++){
        if(idx_a == a.size()){
            q.push_back(sort_b[idx_b]);
            idx_b++;
        }else if(idx_b == b.size()){
            q.push_back(sort_a[idx_a]);
            idx_a++;
        }else if(sort_a[idx_a] < sort_b[idx_b]){
            q.push_back(sort_a[idx_a]);
            idx_a++;
        }else{
            q.push_back(sort_b[idx_b]);
            idx_b++;
        }
    }

    return q;
}


int main(){
    int n;
    cin >> n;
    vector<string> x(n);
    for (int i = 0; i < n;i++){
        cin >> x[i];
    }
    vector<string> y = merge_sort(x);
    for (int i = 0; i < y.size();i++)
        cout << y[i] << " ";

    return 0;
}