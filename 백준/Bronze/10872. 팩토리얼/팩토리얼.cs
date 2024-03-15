using System;


namespace test
{
    class MainApp
    {
        static void Main(string[]args)
        {
            int a = Convert.ToInt32(Console.ReadLine());
            int result = 1;
            for (int i = 0;i<a;i++)
                result = result*(a-i);
            Console.WriteLine(result);
        }
    }
}