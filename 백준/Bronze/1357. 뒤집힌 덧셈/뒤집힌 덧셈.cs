using System;
using System.ComponentModel.Design;
using System.Linq.Expressions;
using System.Text;

namespace BaekJoon
{
    class Program
    {
        static int Rev(int n)
        {
            string result = "";
            string[] arr = new string[n.ToString().Length];
            for (int i = 0; i < n.ToString().Length; i++)
            {
                arr[i] = n.ToString()[i].ToString();
            }
            for (int i = 0, j = arr.Length-1; i < j; i++, j--)
            {
                string temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            for (int i = 0; i < arr.Length; i++)
            {
                result = result + arr[i];
            }

            return int.Parse(result);
        }
        static void Main(string[] args)
        {
            int[] input = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);

            Console.WriteLine(Rev(Rev(input[0]) + Rev(input[1])));
        }
    }
}