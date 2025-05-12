#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;

    cin >> n;

    vector<long long> v1(n, 0);
    vector<long long> v2(n, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    v2 = v1;

    sort(v2.begin(), v2.end());
    v2.erase(unique(v2.begin(), v2.end()), v2.end());

    for (int i = 0; i < n; i++)
    {
        cout << lower_bound(v2.begin(), v2.end(), v1[i]) - v2.begin() << ' ';
    } 

    return 0;
}
