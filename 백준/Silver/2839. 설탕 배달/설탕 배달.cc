#include<iostream>
#include<string>

using namespace std;


    int main()
    {
        int n, count = 0;
        cin >> n, count = 0;

        while (n >= 0) {
            if (n % 5 == 0) {
                cout << count +  (n / 5);
                break;
            }
            n -= 3;
            count++;
        }
        if (n < 0) {
            cout << -1;
        }
        return 0;
    }
