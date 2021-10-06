/**
 *  编写一个程序，其中的 main() 调用一个用户自定义函数（以摄氏温度值为参数，并返回相应的华氏温度值）。
 *  该程序按下面的格式要求用户输入摄氏温度值，并显示结果。
 *  Please enter a Celsius value: 20
 *  20 degress Celsius is 68 degress Fahreneit.
 * 
 *  华氏温度 = 1.8 * 摄氏温度 + 32.0
 */
#include <iostream>

/**
 *  化石
 */
double transferTemperature(double temperature) {
  return 1.8 * temperature + 32.0;
}

int main(int argc, char const *argv[])
{

  double celsius;

  std::cout << "Please enter a Celsius value:";
  std::cin >> celsius;

  double fahreneit = transferTemperature(celsius);

  std::cout << celsius << " degress Celsius is " << fahreneit  << " degress Fahreneit." << std::endl;

  return 0;
}
