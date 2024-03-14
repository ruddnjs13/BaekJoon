using Microsoft.VisualBasic.FileIO;
using System;
namespace Baekjoon
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            int[] nums = new int[n];
            for (int i =0; i< n; i++)
            {
                int input = int.Parse(Console.ReadLine());
                nums[i] = input;
            }
            Array.Sort(nums);
           
            for (int i = 0; i< n; i++)
            {
                Console.WriteLine(nums[i]);
            }
        }
    }
}