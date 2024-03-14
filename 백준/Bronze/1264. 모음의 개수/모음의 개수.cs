using System;
using System.Linq.Expressions;
using System.Text;

namespace BaekJoon
{
    class Program
    {
        static void Main(string[] args)
        {
            while (true)
            {
                int count = 0;
                string input = Console.ReadLine();
                if (input == "#")
                {
                    break;
                }
                for (int i = 0; i < input.Length; i++)
                {
                    if (input[i] == 'a' || input[i] == 'e' || input[i] == 'i' || input[i] == 'o' || input[i] == 'u'|| input[i] == 'A' || input[i] == 'E' || input[i] == 'I' || input[i] == 'O' || input[i] == 'U')
                    {
                        count++;
                    }
                }
                Console.WriteLine(count);
            }
        }
    }
}
