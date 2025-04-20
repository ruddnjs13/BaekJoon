#include <iostream>
#include <queue>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    priority_queue<int> pq;
    int n, x;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x == 0) {
            if (pq.empty())
                cout << '0' << '\n';
            else {
                cout << pq.top() * -1 << '\n';
                pq.pop();
            }
        }
        else {
            pq.push(x * -1);
        }
    }
}