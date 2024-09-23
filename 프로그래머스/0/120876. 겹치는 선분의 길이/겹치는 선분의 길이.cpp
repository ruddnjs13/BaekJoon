#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> lines) {
    int answer = 0;
    int numberList[201] = { 0, };
    for (int i = lines[0][0]; i < lines[0][1]; i++) {
        numberList[i + 101]++;
    }
    for (int i = lines[1][0]; i < lines[1][1]; i++) {
        numberList[i + 101]++;
    }
    for (int i = lines[2][0]; i < lines[2][1]; i++) {
        numberList[i + 101]++;
    }
    int count;
    for (int i = 0; i <= 200; i++) {
        if (numberList[i] > 1) {
            answer++;
        }
    }
    return answer;
}

int main() {

}