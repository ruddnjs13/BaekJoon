using System;
namespace Baekjoon
{
    class Program
    {
        static void Main(string[] args)
        {
            
            int n = int.Parse(Console.ReadLine());
            int[] nums = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
            int count = n;
            for (int i = 0; i < nums.Length; i++)
            {
                if (nums[i] == 1)
                {
                    count--;
                    continue;
                }
                for (int j = 2; j < nums[i]; j++)
                {
                    if (nums[i]%j == 0)
                    {
                        count--;
                        break;
                    }
                }
            }
            Console.WriteLine(count);
        }
    }
}