#include <iostream>
#include <queue>
#include <unordered_set>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long a, b;
    cin >> a >> b;

    queue<long long> q;
    unordered_set<long long> visited;

    q.push(a);
    visited.insert(a);

    int cnt = 1; 
    bool found = false;

    while (!q.empty()) {
        int qSize = q.size();
        for (int i = 0; i < qSize; i++) {
            long long current = q.front();
            q.pop();

            long long num1 = current * 10 + 1;
            long long num2 = current * 2;

            if (num1 == b || num2 == b) {
                cout << cnt + 1; 
                found = true;
                break;
            }

            if (num1 < b && visited.insert(num1).second)
                q.push(num1);

            if (num2 < b && visited.insert(num2).second)
                q.push(num2);
        }
        if (found) break;
        cnt++;
    }

    if (!found) cout << -1;
    return 0;
}
