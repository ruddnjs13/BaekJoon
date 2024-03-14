using System;
using System.ComponentModel.Design;
using System.Linq.Expressions;
using System.Text;

namespace BaekJoon
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] a = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
            int[] b = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
            int[] c = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);

            int h = a[3] - a[0];
            int m = a[4] - a[1];
            int s = a[5] - a[2];

            if (s < 0)
            {
                m--;
                s = 60 + s;
            }
            if (m < 0)
            {
                h--;
                m = 60 + m;
            }
            Console.WriteLine($"{h} {m} {s}");

             h = b[3] - b[0];
             m = b[4] - b[1];
             s = b[5] - b[2];

            if (s < 0)
            {
                m--;
                s = 60 + s;
            }
            if (m < 0)
            {
                h--;
                m = 60 + m;
            }
            Console.WriteLine($"{h} {m} {s}");

            h = c[3] - c[0];
            m = c[4] - c[1];
            s = c[5] - c[2];

            if (s < 0)
            {
                m--;
                s = 60 + s;
            }
            if (m < 0)
            {
                h--;
                m = 60 + m;
            }
            Console.WriteLine($"{h} {m} {s}");

        }
    }
}