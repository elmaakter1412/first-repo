#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;
int visited[N], level[N];
vector<int> adj_list[N];
int n, m;

void canBeReunited(int x, int y) {
    queue<int> q;

    visited[x] = 1;
    level[x] = 0;
    q.push(x);

    while (!q.empty()) {
        int head = q.front();
        q.pop();

        for (int adj_node : adj_list[head]) {
            if (visited[adj_node] == 0) {
                level[adj_node] = level[head] + 1;
                if (adj_node == y) {
                    return;
                }
                visited[adj_node] = 1;
                q.push(adj_node);
            }
        }
    }
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    int x, y, k;
    cin >> x >> y >> k;
    canBeReunited(x, y);

    float step = ceil((float)level[y] / 2);
    if (step <= k && level[y] != 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}