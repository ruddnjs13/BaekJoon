#include <string>
#include <vector>

using namespace std;

int countarray[1001];


int solution(vector<int> array) {
    int answer = 0, max=-1;
    bool flag;
    for (int i = 0; i < array.size(); i++) {
        countarray[array[i]]++;
    }

    for (int i = 0; i <= 1000; i++) {
        if (countarray[i] > max) {
            flag = false;
            max = countarray[i];
            answer = i;
        }
        else if (countarray[i] == max) {
            flag = true;
        }
    }
    if (flag)
        return -1;
    else
        return answer;
}