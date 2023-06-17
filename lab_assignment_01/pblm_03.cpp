#include<bits/stdc++.h>
using namespace std;

int cnt = 0;

vector<int> merge_sort(vector<int>p,int k){
    if(p.size() <=1){
        return p;
    }

    int half = p.size() / 2;
    vector<int> a;
    vector<int> b;
    for (int i = 0; i < half;i++)
        a.push_back(p[i]);
    for (int i = half; i < p.size();i++)
        b.push_back(p[i]);

    vector<int> sort_a = merge_sort(a, k);
    vector<int> sort_b = merge_sort(b, k);

    int idx_a = 0;
    int idx_b = 0;
    vector<int> q;
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
    int i = 0, j = (sort_b.size() - 1);

    while (i < sort_a.size() && j >=0) {
        if (sort_a[i] + sort_b[j] == k) {
            cnt++;
            i++;
            j--;
        }
        else if (sort_a[i] + sort_b[j] < k) {
            i++;
        }
        else {
            j--;
        }
    }

    return q;
}


int main(){
    int n,k;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n;i++)
        cin >> a[i];
    cin >> k;

    vector<int> q = merge_sort(a,k);

    cout << cnt;
    return 0;
}