/**
 *  编写一个程序，其 main() 调用一个用户自定的函数（以光年值为参数，并返回对应天文单位的值）。
 *  该程序要求按下面的格式要求用户输入光年值，并显示结果。
 *
 *  Enter the number of light years: 4.2
 *  4.2 light years = 265608 astronomical units.
 * 
 *  一光年 = 63240天文单位
 */
#include <iostream>

double transform(double time) {
  return time * 63240;
}

int main(int argc, char const *argv[])
{
  double time;

  std::cout << "Enter the number of light years: ";
  std::cin >> time;


  std::cout << time << " light years = " << transform(time) << " astronomical units." << std::endl;
  return 0;
}
