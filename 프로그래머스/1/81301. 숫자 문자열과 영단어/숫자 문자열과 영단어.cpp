#include<iostream>
#include<string>
#include<stack>

using namespace std;

string Numbers[10]{ "zero","one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };

int solution(string s) {
    int answer = 0;
    string check = "";

    for (int i = 0; i <= s.size(); i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            answer = answer * 10 + (int)(s[i] - '0');
            continue;
        }
        check += s[i];
        for (int j = 0; j < 10; j++) {
            if (check == Numbers[j]) {
                answer = answer * 10 + j;
                check = "";
                continue;
            }
        }
    }
    return answer;
}

int main()
{
    cout <<  solution("one4seveneight");
}