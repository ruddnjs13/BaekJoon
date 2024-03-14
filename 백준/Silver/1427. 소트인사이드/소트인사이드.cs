using System;
using System.Linq.Expressions;
using System.Text;

namespace BaekJoon
{
    class Program
    {
        static void Main(string[] args)
        {
            int input = Convert.ToInt32(Console.ReadLine());
            int[] answer = new int[input.ToString().Length];
            for (int i = 0; i < input.ToString().Length; i++)
            {
                answer[i] = Convert.ToInt32(input.ToString()[i].ToString());
            }

            Array.Sort(answer);

            for (int i = answer.Length-1; i >= 0; i--)
            {
                Console.Write(answer[i]);
            }
        }
    }
}
