using System;
using System.ComponentModel.Design;
using System.Linq.Expressions;
using System.Text;
using System.Collections.Generic;
using System.Linq;

namespace BaekJoon
{
    class Program
    {
        static void Main(string[] args)
        {
            StringBuilder answer = new StringBuilder();

            // n값 입력받음
            int n = Convert.ToInt32(Console.ReadLine());
            int[] nInput = new int[n]; 
            nInput = Array.ConvertAll(Console.ReadLine().Split(' '), Convert.ToInt32);

            //n값 배열 정렬
            Array.Sort(nInput);

            // m값 입력받음
            int m = Convert.ToInt32(Console.ReadLine());
            int[] mInput = new int[m];
            mInput = Array.ConvertAll(Console.ReadLine().Split(' '), Convert.ToInt32);

           for (int i = 0; i < m; i++)
            {
                answer.AppendLine(BinarySearch(nInput,mInput[i]).ToString());
            }

            Console.WriteLine(answer.ToString());
        }

        // 이분탐색 함수
        static int BinarySearch(int[] arr, int key)
        {
            int l = 0;
            int h = arr.Length - 1;
            while (l <= h)
            {
                int mid = l + (h - l) / 2;
                if (arr[mid] == key)
                {
                    return 1;
                }
                else if (arr[mid]<key)
                {
                    l = mid + 1;
                }
                else
                {
                    h = mid - 1;
                }
            }
            return 0;
        }
    }
}