#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t, length;
    bool flag = true;

    string command, input;
    vector<int> numlist;
    cin >> t;

    for (int i = 0; i < t; i++) {
        flag = true;

        cin >> command;
        cin >> length;
        cin >> input;

        for (int i = 0; i < input.length(); i++) {
            if (input[i] >= 48 && input[i] <= 57) {
                int cnt = 0;
                int j = i;
                while (true) {
                    if (input[j] >= 48 && input[j] <= 57) {
                        cnt++;
                        j++;
                        continue;
                    }
                    else {
                        numlist.push_back(stoi(input.substr(i, cnt)));
                        i = j;
                        break;
                    }
                }

            }
        }

        int start = 0, end = length-1, dCount = 0;
        
        for (auto c : command) {
            
            if (c == 82) {
                int temp = start;
                start = end;
                end = temp;
               
            }
            if (c == 68) {
                dCount++;
                if (dCount > length) {
                    flag = false;
                    break;
                }
                else if (start < end) {
                    start++;
                }
                else if (start > end) {
                    start--;
                }
            }
        }

        if (flag) {
            string answer;
            answer += '[';
            if (start <= end && dCount != length) {
                for (int i = start; i <= end; i++) {
                    answer += to_string(numlist[i]);
                    answer += ',';
                }
            }
            else if (start > end && dCount != length) {
                for (int i = start; i >= end; i--) {
                    answer += to_string(numlist[i]);
                    answer += ',';
                }
            }
            if (answer.length() > 2)
                answer.pop_back();
            answer += ']';
            cout << answer << '\n';
        }
        else
            cout << "error" << '\n';
        numlist.clear();
    }
    return 0;
}