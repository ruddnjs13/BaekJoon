#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[10];
bool visited[10];

void dfs(int start, int depth) {
    if (depth == m) {
        for (int i = 0; i < m; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }

    for (int i = start; i <= n; i++) {
        arr[depth] = i;
        dfs(i + 1, depth + 1);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;
    dfs(1, 0);
}