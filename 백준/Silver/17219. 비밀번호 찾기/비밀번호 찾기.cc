#include <iostream>
#include <map>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    map<string, string> map;

    int n, m;

    string address, pessword;

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> address >> pessword;
        map.insert({ address, pessword });
    }
    for (int i = 0; i < m; i++) {
        cin >> address;
        cout << map.at(address) << '\n';
    }
}