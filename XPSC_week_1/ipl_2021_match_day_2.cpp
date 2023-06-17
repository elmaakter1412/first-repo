//Author: elmaakter14120;
    
#include <bits/stdc++.h>
using namespace std;

vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
    vector<int> x;
    int mx = arr[0];
    list<int> li;

    for (int i = 0; i < k; i++) {
        li.push_back(arr[i]);
        if (mx <= arr[i]) {
            mx = arr[i];
        }
    }

    x.push_back(mx);

    for (int i = k; i < n; i++) {
        int front = li.front();
        li.pop_front();
        li.push_back(arr[i]);
        if (arr[i] >= mx) {
            mx = arr[i];
        } else if (front == mx) {
            mx = *max_element(li.begin(), li.end());
        }
        x.push_back(mx);
    }
    return x;
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    vector<int> res = max_of_subarrays(arr, n, k);
    for (int i = 0; i < res.size(); i++) cout << res[i] << " ";
    cout << endl;

    return 0;
}