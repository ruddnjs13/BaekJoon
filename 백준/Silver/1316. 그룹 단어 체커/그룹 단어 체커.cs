using System;

namespace Baekjoon
{
    class Program
    {
        static void Main(string[] args)

        {
            int n = int.Parse(Console.ReadLine());
          
            int answer = n;

            for (int i = 0; i < n; i++)
            {
                bool[] check = new bool[26];
                string input = Console.ReadLine();
                for (int j = 0; j < input.Length; j++)
                {
                    if (check[input[j] - 'a'] == true)
                    {
                        answer--;
                        break;
                    }
                    else if (j == input.Length - 1)
                    {
                        break;
                    }
                    
                    else if (input[j] == input[j + 1])
                    {
                        continue;
                    }
                    else if (input[j] != input[j + 1])
                    {
                        check[input[j]-'a'] = true;
                        continue;
                    }
                }
            }
            Console.WriteLine(answer);
        }
    }
}