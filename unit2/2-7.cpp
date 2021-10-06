/**
 * 编写一个程序，要求用户输入小时数和分钟数，将这两个值传递给一个 void函数，
 * 后者以下面这样的格式显示这两个值：
 * 
 * Enter the number of hours: 9
 * Enter the number of minutes: 28
 * Time: 9: 28
 */
#include <iostream>

void showTime(int hour, int minute) {
  std::cout << hour << ':' << minute << std::endl;
}

int main(int argc, char const *argv[])
{

  int hour;
  int minute;

  std::cout << "Enter the number of hours: ";
  std::cin >> hour;

  std::cout << "Enter the number of minutes: ";
  std::cin >> minute;

  showTime(hour, minute);
  return 0;
}

