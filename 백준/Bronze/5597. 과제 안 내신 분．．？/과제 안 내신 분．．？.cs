using System;

namespace beakjun
{
    class program
    {
        static void Main(string[] args)
        {
            int[] arr = new int[31];
            int input = 0;
            for (int i = 0; i < 28; i++)
            {
                input = int.Parse(Console.ReadLine());
                for (int j = 1; j <31; j++)
                {
                    if (j == input)
                    {
                        arr[j] = 1;
                    }
                }
            }

            for (int i =1; i <31; i++)
            {
                if (arr[i]==0)
                {
                    Console.WriteLine(i);
                }
            }
        }
    }
}