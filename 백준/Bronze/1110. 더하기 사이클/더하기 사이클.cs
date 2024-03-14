using System;
using System.Linq.Expressions;
using System.Text;

namespace BaekJoon
{
    class Program
    {
        static void Main(string[] args)
        {
            int number = int.Parse(Console.ReadLine());
            int check_num = number, count = 0;
            do
            {
                int sib = number / 10;
                int il = number - sib*10;
                int hap = sib + il;

                if (hap >= 10)
                {
                    hap -= 10;
                    number = il * 10 + hap;
                }
                else
                {
                    number = il * 10 + hap;
                }
                count++;
            } while (number != check_num);
            Console.WriteLine(count);
        }
    }
}
