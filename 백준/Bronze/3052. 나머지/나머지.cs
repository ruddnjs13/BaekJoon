using System;
using System.Threading;

namespace beakjun
{
    class program
    {
        static void Main(string[] args)
        {
            int[] arr = new int[10];

            for (int i =0; i< 10; i++)
            {
                arr[i] = -1;
            }

            for (int i = 0; i <10; i++)
            {
                int input = int.Parse(Console.ReadLine());
                for (int j = 0; j < 10; j++)
                {
                    if(arr[j] == input%42)
                    {
                        arr[i] = -1;
                        break;
                    }
                    if (j == 9 && arr[9] != input%42)
                        arr[i] = input%42;
                }
            }

            int count = 0;
            for (int i =0;i < 10; i++)
            {
                if (arr[i] > -1)
                    count++;
            }
            Console.WriteLine(count); 
        }
    }
}