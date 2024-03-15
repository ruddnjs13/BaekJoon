using System;
using System.Collections.Generic;
using System.Collections.Immutable;

namespace baekjun
{
    class program
    {
        static void Main(string[] args)
        {
            char[] chars = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o','p','q','r','s','t','u','v','w','x','y','z'};
            string input = Console.ReadLine();
            for (int i = 0; i < chars.Length; i++)
            {
                for (int j = 0; j < input.Length; j++)
                {
                    if (chars[i] == input[j])
                    {
                        Console.Write(j+" ");
                        break;
                    }
                    else if (j>=input.Length-1)
                        Console.Write(-1 + " ");
                }
                
            }
        }

    }
}