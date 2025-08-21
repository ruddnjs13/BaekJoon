#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
using namespace std;

map<char, pair<char, char>> tree;

void f1(char node)
{
    cout << node;

    if (tree[node].first !=  -1)
    {
        f1(tree[node].first);
    }

    if (tree[node].second != -1)
    {
        f1(tree[node].second);
    }
}

void f2(char node)
{

    if (tree[node].first != -1)
    {
        f2(tree[node].first);
    }
    cout << node;


    if (tree[node].second != -1)
    {
        f2(tree[node].second);
    }
}

void f3(char node)
{

    if (tree[node].first != -1)
    {
        f3(tree[node].first);
    }

    if (tree[node].second != -1)
    {
        f3(tree[node].second);
    }
    cout << node;

}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;

    char a, b, c;

    cin >> n;


    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;

        pair<char, char> child = { -1,-1 };

        if (b != '.')
            child.first = b;
        if (c != '.')
            child.second = c;

        tree[a] = child;
    }


    f1('A');
    cout << '\n';
    f2('A');
    cout << '\n';
    f3('A');
    cout << '\n';
    
    return 0;
}
