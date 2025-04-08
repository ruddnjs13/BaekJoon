#include <iostream>
#include <string>
using namespace std;
int main()
{
    string input;
    cin >> input;

    int answer = 0;
    string num;
    bool flag = false;

    for (int i = 0; i <= input.size(); i++)
    {
        if (input[i] == '-' || input[i] == '+' || i == input.size())
        {
            if (flag)
            {
                answer -= stoi(num);
                num = "";
            }
            else
            {
                answer += stoi(num);
                num = "";
            }
        }
        else
        {
            num += input[i];
        }

        if (input[i] == '-')
        {
            flag = true;
        }
    }

    cout << answer;
}
