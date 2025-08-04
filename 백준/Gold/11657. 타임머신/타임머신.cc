#include <iostream>
#include <vector>
#include <tuple>
using namespace std;

vector<tuple<int,int,int>> graph;
vector<long long> dist; 
int n, m;
bool flag = false;
const long long INF = 1e15;

void bellmanford() {
    dist[1] = 0;

    for (int i = 1; i <= n - 1; i++) {
        for (auto &[from, to, cost] : graph) {
            if (dist[from] == INF) continue;
            if (dist[to] > dist[from] + cost) {
                dist[to] = dist[from] + cost;
            }
        }
    }

  
    for (auto &[from, to, cost] : graph) {
        if (dist[from] == INF) continue;
        if (dist[to] > dist[from] + cost) {
            flag = true;
            return;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    dist.assign(n + 1, INF);
    graph.clear();

    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        graph.push_back({a, b, c});
    }

    bellmanford();

    if (flag) {
        cout << -1 << '\n';
        return 0;
    }

    for (int i = 2; i <= n; i++) {
        if (dist[i] == INF) cout << -1 << '\n';
        else cout << dist[i] << '\n';
    }
}
