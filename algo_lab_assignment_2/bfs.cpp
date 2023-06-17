#include <bits/stdc++.h>

using namespace std;

const int MAX_N = 1010;

int dx[] = {1, -1, 0, 0, 1, 1, -1, -1};
int dy[] = {0, 0, 1, -1, 1, -1, -1, 1};

bool isValid(int x, int y, int n)
{
    return x >= 0 && x < n && y >= 0 && y < n;
}

bool bfs(vector<vector<int>> &a, int bx, int by, int cx, int cy, int n)
{
    if (bx == cx && by == cy)
    {
        return true;
    }

    a[bx][by] = 2;

    for (int i = 0; i < 8; i++)
    {
        int nx = bx + dx[i];
        int ny = by + dy[i];

        if (isValid(nx, ny, n) && a[nx][ny] == 0)
        {
            if (bfs(a, nx, ny, cx, cy, n))
            {
                return true;
            }
        }
    }

    return false;
}

int main()
{
    int n;
    cin >> n;

    int ax, ay, bx, by, cx, cy;
    cin >> ax >> ay >> bx >> by >> cx >> cy;

    vector<vector<int>> a(n, vector<int>(n, 0));

    for (int i = 0; i < n; i++)
    {
        a[i][ay - 1] = 1;
        a[ax - 1][i] = 1;
    }

    int i = ax - 1, j = ay - 1;
    while (i < n && j < n)
    {
        a[i][j] = 1;
        i++;
        j++;
    }

    i = ax - 1, j = ay - 1;
    while (i >= 0 && j < n)
    {
        a[i][j] = 1;
        i--;
        j++;
    }

    i = ax - 1, j = ay - 1;
    while (i < n && j >= 0)
    {
        a[i][j] = 1;
        i++;
        j--;
    }

    i = ax - 1, j = ay - 1;
    while (i >= 0 && j >= 0)
    {
        a[i][j] = 1;
        i--;
        j--;
    }

    if (bfs(a, bx - 1, by - 1, cx - 1, cy - 1, n))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}