using System;

namespace Baekjoon
{
    class Program
    {
        static void Main(string[] args)

        {
            int[] count = new int[26];

            string input = Console.ReadLine();
            for (int i = 0; i <input.Length; i++)
            {
                if (input[i] == 'a' || input[i] == 'A')
                    count[0]++;
                else if (input[i] == 'b' || input[i] == 'B')
                    count[1]++;
                else if (input[i] == 'c' || input[i] == 'C')
                    count[2]++;
                else if (input[i] == 'd' || input[i] == 'D')
                    count[3]++;
                else if (input[i] == 'e' || input[i] == 'E')
                    count[4]++;
                else if (input[i] == 'f' || input[i] == 'F')
                    count[5]++;
                else if (input[i] == 'g' || input[i] == 'G')
                    count[6]++;
                else if (input[i] == 'h' || input[i] == 'H')
                    count[7]++;
                else if (input[i] == 'i' || input[i] == 'I')
                    count[8]++;
                else if (input[i] == 'j' || input[i] == 'J')
                    count[9]++;
                else if (input[i] == 'k' || input[i] == 'K')
                    count[10]++;
                else if (input[i] == 'l' || input[i] == 'L')
                    count[11]++;
                else if (input[i] == 'm' || input[i] == 'M')
                    count[12]++;
                else if (input[i] == 'n' || input[i] == 'N')
                    count[13]++;
                else if (input[i] == 'o' || input[i] == 'O')
                    count[14]++;
                else if (input[i] == 'p' || input[i] == 'P')
                    count[15]++;
                else if (input[i] == 'q' || input[i] == 'Q')
                    count[16]++;
                else if (input[i] == 'r' || input[i] == 'R')
                    count[17]++;
                else if (input[i] == 's' || input[i] == 'S')
                    count[18]++;
                else if (input[i] == 't' || input[i] == 'T')
                    count[19]++;
                else if (input[i] == 'u' || input[i] == 'U')
                    count[20]++;
                else if (input[i] == 'v' || input[i] == 'V')
                    count[21]++;
                else if (input[i] == 'w' || input[i] == 'W')
                    count[22]++;
                else if (input[i] == 'x' || input[i] == 'X')
                    count[23]++;
                else if (input[i] == 'y' || input[i] == 'Y')
                    count[24]++;
                else if (input[i] == 'z' || input[i] == 'Z')
                    count[25]++;
            }

            int max = 0;
            int same = 0;

            for (int i = 1; i< 26; i++)
            {
                if (count[i] == count[max])
                {
                    max = i;
                    same = 1;
                }
                else if (count[i] > count[max])
                {
                    max = i;
                    same = 0;
                }
            }
            if (same == 0)
                Console.WriteLine((char)(max + 65));
            else if (same == 1)
                Console.WriteLine('?');
        }
    }
}