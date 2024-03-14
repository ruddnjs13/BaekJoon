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
            int[] minguk = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
            int[] manse = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
            int minguksum = (minguk[0] + minguk[1] + minguk[2] + minguk[3]);
            int mansesum = manse[0] + manse[1] + manse[2] + manse[3];

            if (minguksum == mansesum)
            {
                Console.WriteLine(minguksum);
            }
            else if (minguksum > mansesum)
            {
                Console.WriteLine(minguksum);
            }
            else
            {
                Console.WriteLine(mansesum);
            }
        }
    }
}