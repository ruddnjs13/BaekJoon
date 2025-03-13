#include <iostream>
#include <map>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n, m, i, j, sum = 0;
    cin >> n >> m;

    long long* nums = new long long[n + 1] {0, };

    for (int j = 1; j <= n; j++) {
        cin >> nums[j];
        nums[j] = nums[j - 1] + nums[j];
    }

    for (int k = 1; k <= m; k++) {
        cin >> i >> j;
        cout << nums[j] - nums[i-1]<< '\n';
    }
}