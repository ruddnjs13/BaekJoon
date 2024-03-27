int[] inputhm = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
int input = int.Parse(Console.ReadLine());
int h = inputhm[0], m = inputhm[1];
int add_h = input / 60, add_m = input % 60;
m += add_m; 
h = (h += add_h + m / 60) % 24; 
m = m % 60;
Console.WriteLine($"{h} {m}");