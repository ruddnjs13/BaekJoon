#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<int> inputs(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> inputs[i];
    }

    sort(inputs.begin(), inputs.end());
    
    int  low = 0, high = *max_element(inputs.begin(), inputs.end()), mid = high / 2;

    while (low <= high) {
        mid = (low + high) / 2;
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            if (inputs[i] > mid)
                sum += inputs[i] - mid;
        }

        if (sum >= m)
            low = mid + 1;
        else {
            high = mid - 1;
        }
        
    }

    cout << high;
}