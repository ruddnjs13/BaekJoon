using System;
using System.Threading;
namespace Baekjoon
{
    class Program
    {
        static int Autoarrmade(int n, int b)
        {
            int nam = 0;
            int count = 0;
            while (n >=b)
            {
                nam = n % b;
                n /= b;
                count++;

            }
            if (n > 0)
                count++;
            return count;
        }
        static void Main(string[] args)
        {
            string[] input = Console.ReadLine().Split(' ');
            int n = int.Parse(input[0]);
            int b = int.Parse(input[1]);
            int nam = 0;
            string[] answer = new string[Autoarrmade(n, b)];
            int i = answer.Length-1;
            
            while (n >= b)
            {
                nam = n % b;
                if (nam > 9)
                    answer[i] = ((char)(nam + 55)).ToString();
                else
                    answer[i] = (nam).ToString();
                n /= b;
                i--;
            }

            if (n > 9)
                answer[0] = ((char)(n + 55)).ToString();
            else
                answer[0] = (n).ToString();

            for (int j = 0; j < answer.Length; j++)
                Console.Write(answer[j]);
        }
    }
}