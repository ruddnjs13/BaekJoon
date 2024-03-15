using System;

namespace Test
{
    class Program
    {
        static void Main(string[] args)
        {

            // 입력받을 수의 개수
            int roop = int.Parse(Console.ReadLine());

            // 한줄에 여러개의 값을 받지못함으로 s문자열에 공백으로 나눠서 받음
            string s = Console.ReadLine();

            // 문자열 내에 공백을 기준으로 문자열을 나눠 arr배열에 저장
            string[] arr = s.Split(' ');

            // 문자열에 있는 값을 정수형으로 변환시켜 정수형배열에 저장
            int[] arr_num = new int[roop];
            for (int i = 0; i < roop; i++)
            {
                arr_num[i] = int.Parse(arr[i]);
            }

            // 배열 안에 값들과 비교할 값 입력
            int count_num = int.Parse(Console.ReadLine());

            // 배열에 i번 인덱스 값이 비교값과 갔다면 count++함
            int count = 0;
            for (int i = 0; i < roop; i++)
            {
                if (arr_num[i] == count_num)
                    count++;
            }
            // 결과 출력
            Console.WriteLine(count);
            
        }
    }
}
