#include <iostream>
using namespace std;
int c[1000000];


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, k, cnt = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    for (int i =n-1; i >= 0; i--)
    {
        cnt = cnt + k / c[i];
        k %= c[i];
        if (k == 0)
        {
            break;
        }
    }
    cout << cnt;
}