using System;

namespace beakjun
{
    class program
    {
        static void Main(string[] args)
        {
            int[] arr = new int[9];
            int max=0;
            int num=0;
            
            for (int i = 0; i<9; i++)
            {
                arr[i] = int.Parse(Console.ReadLine());
                if (arr[i]>max)
                {
                    max = arr[i];
                    num = i;
                }
            }
            Console.WriteLine($"{max}\n{num+1}");
        }
    }
}