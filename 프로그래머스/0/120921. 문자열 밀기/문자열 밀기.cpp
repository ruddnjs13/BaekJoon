#include<iostream>
#include<string>

using namespace std;

int solution(string a, string b) {
    int count = 0;
    while (a != b) {
        if (count > a.length()) {
            count = -1;
            break;
        }
        string temp = a;
        string answer = "";
        answer += temp[a.length() - 1];
         
        for (int i = 0; i < temp.length()-1; i++) {
            answer += temp[i];
        }
        a = answer;
        count++;
    }

    return count;
}