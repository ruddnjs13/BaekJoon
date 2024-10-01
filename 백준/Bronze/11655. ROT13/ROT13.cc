#include<iostream>
#include<string>

using namespace std;

int main()
{
	string input;
	getline(cin, input);

	for (int i = 0; i < input.size(); i++) 
	{
		if (input[i] >= 'a' && input[i] <= 'z') 
		{
			int num = input[i] + 13;
			if (num > 122) 
			{
				num = 97 + (num - 123);
			}
			input[i] = (char)num;
		}
		else if (input[i] >= 'A' && input[i] <= 'Z') 
		{
			int num = input[i] + 13;

			if (num > 90) 
			{
				num = 65 + (num - 91);
			}
			input[i] = (char)num;
		}
	}

	cout << input;
}