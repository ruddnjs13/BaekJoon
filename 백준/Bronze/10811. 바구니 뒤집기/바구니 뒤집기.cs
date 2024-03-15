using System;
using System.Threading;

namespace beakjun
{
    class program
    {
        static void Main(string[] args)
        {
            int[] nm = Array.ConvertAll(Console.ReadLine().Split(' '),int.Parse);
            int[] arr = new int[nm[0]+1];
            int a, b;

            for (int i = 1; i <= nm[0]; i++)
            {
                arr[i] = i ;
            }

           for (int i =0; i < nm[1]; i++)
            {
                int[] input = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
                a = input[0];
                b = input[1];
                while (a < b)
                {
                    int temp = arr[a];
                    arr[a] = arr[b];
                    arr[b] = temp;
                    a++;
                    b--;
                    
                }
                
            }

            for (int i = 1; i <= nm[0]; i++)
            {
                Console.Write(arr[i]+" ");
            }
        }

    }
}