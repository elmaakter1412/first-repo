#include <iostream>
#include <queue>
using namespace std;

const int MAXN = 1005;
bool visited[MAXN][MAXN];
int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

int main() {
    int n, ax, ay, bx, by, cx, cy;
    cin >> n >> ax >> ay >> bx >> by >> cx >> cy;

    // Mark the queen's attack range
    for (int i = 1; i <= n; i++) {
        visited[ax][i] = visited[i][ay] = true;
        if (ax - i >= 1 && ay - i >= 1) visited[ax-i][ay-i] = true;
        if (ax - i >= 1 && ay + i <= n) visited[ax-i][ay+i] = true;
        if (ax + i <= n && ay - i >= 1) visited[ax+i][ay-i] = true;
        if (ax + i <= n && ay + i <= n) visited[ax+i][ay+i] = true;
    }

    // BFS to find a path for the king
    queue<pair<int,int>> q;
    q.push({bx, by});
    visited[bx][by] = true;
    while (!q.empty()) {
        auto curr = q.front();
        q.pop();
        int x = curr.first, y = curr.second;
        if (x == cx && y == cy) {
            cout << "YES\n";
            return 0;
        }
        for (int i = 0; i < 8; i++) {
            int nx = x + dx[i], ny = y + dy[i];
            if (nx >= 1 && nx <= n && ny >= 1 && ny <= n && !visited[nx][ny]) {
                visited[nx][ny] = true;
                q.push({nx, ny});
            }
        }
    }

    cout << "NO\n";
    return 0;
}
