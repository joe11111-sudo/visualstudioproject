using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace 计算器控制台输出
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("请输入一个数字：");
            string num1 = Console.ReadLine();
            int number1 = checkNum(num1);

            Console.WriteLine("请输入二个数字：");
            string num2 = Console.ReadLine();
            int number2 = checkNum(num2);

            Console.WriteLine("选择运算符：1.+ 2.- 3.* 4./");
            string fun = Console.ReadLine();
            GetResult(fun, number1, number2);
            Console.ReadLine();
        }

        static int checkNum(string num)
        {
            try
            {
                int i = int.Parse(num);
                return i;
            }
            catch (Exception e)
            {
                Console.WriteLine("输入有误");
                string str = Console.ReadLine();
                return checkNum(str);
            }
        }
        static void GetResult(string fun,int number1,int number2)
        {
            int result = 0;
            string yun = "";
            switch (fun)
            {
                case "1":
                    result = number1 + number2;
                    yun = "+";
                    break;
                case "2":
                    result = number1 - number2;
                    yun = "-";
                    break;
                case "3":
                    result = number1 * number2;
                    yun = "*";
                    break;

                case "4":
                    result = number1 / number2;
                    yun = "/";
                    break;
                default:
                    Console.WriteLine("error");
                    string str = Console.ReadLine();
                    GetResult(str, number1, number2);
                    return;
            }
            Console.WriteLine("{0}{3}{1}={2}", number1, number2, result, yun);
        }
    }
}
