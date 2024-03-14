using System;

namespace Baekjoon
{
    class Program
    {
        static void Main(string[] args)

        {
            string input = Console.ReadLine();
            int count = 0;
            for (int i = 0; i<input.Length; i++)
            {
                if (input[i] == 'c' && i < input.Length - 1)
                {
                    if (input[i+1] == '=')
                    {
                        count++;
                        i++;
                        continue;
                    }
                    if (input[i+1] == '-')
                    {
                        count++;
                        i++;
                        continue;
                    }
                    else
                    {
                        count++;
                        continue;
                    }
                }

                else if (input[i] == 'd' && i < input.Length - 2)
                {
                    if (input[i + 1] == '-' && i < input.Length - 1)
                    {
                        count++;
                        i++;
                        continue;
                    }
                    else if (input[i + 1] == 'z' && input[i + 2] == '=')
                    {
                        count++;
                        i++;
                        i++;
                        continue;
                    }
                    else{
                        count++;
                        continue;
                    }

                } 

                else if (input[i] == 'l' && i < input.Length - 1)
                {
                    if (input[i + 1] == 'j')
                    {
                        count++;
                        i++;
                        continue;
                    }
                    else
                    {
                        count++;
                        continue;
                    }
                }

                else if (input[i] == 'n' && i < input.Length - 1)
                {
                    if (input[i + 1] == 'j')
                    {
                        count++;
                        i++;
                        continue;
                    }
                    else
                    {
                        count++;
                        continue;
                    }
                }

                else if (input[i] == 's' && i < input.Length - 1)
                {
                    if (input[i + 1] == '=')
                    {
                        count++;
                        i++;
                        continue;
                    }
                    else if (input[i + 1] == '-')
                    {
                        count++;
                        i++;
                        continue;
                    }
                    else
                    {
                        count++;
                        continue;
                    }
                }


                else if (input[i] == 'z' && i < input.Length - 1)
                {
                    if (input[i + 1] == '=')
                    {
                        count++;
                        i++;
                        continue;
                    }
                    else
                    {
                        count++;
                        continue;
                    }
                }
                else if(input[i]!='=' && input[i]!='-')
                    count++;
            }
            Console.WriteLine(count);
        }
    }
}