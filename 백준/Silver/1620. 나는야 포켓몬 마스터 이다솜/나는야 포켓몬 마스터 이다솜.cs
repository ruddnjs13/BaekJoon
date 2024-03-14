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
            Dictionary<string, int> pokemon = new Dictionary<string, int>();
            Dictionary<int, string> pokemon2 = new Dictionary<int, string>();

            int[] nmInput = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
            int n = nmInput[0], m = nmInput[1];

            for (int i = 1; i <= n; i++)
            {
                string pkmInput = Console.ReadLine();
                pokemon.Add(pkmInput, i);
                pokemon2.Add(i, pkmInput);
            }

            for (int i =0; i <m; i++)
            {
                int intOut = 0;
                string input = Console.ReadLine();
                if (pokemon.ContainsKey(input))
                {
                    answer.AppendLine(pokemon[input].ToString());
                }
                else
                {
                    answer.AppendLine(pokemon2[Convert.ToInt32(input)]);
                }
            }
            Console.WriteLine(answer.ToString());
        }
    }
}