#include <iostream>

/**
 *  编写一个程序，编写一个程序，要求用户以度、分、秒的方式输入一个纬度，然后以度为单位显示该纬度。
 *  1 度为 60分，1分为等于 60 秒，请以符号常量的方式表示这些值。
 * 对于每个输入值，应使用一个独立的变量存储它．下面是该程序运行时的情况：
 * 
 * Enter a latitude in degrees，minutes, and seconds : 
 * First, enter the degrees: 37
 * Next , enter the minutes of arc: 51
 * Finall, enter the seconds of arc: 19
 * 37 degrees, 51minutes, 19 seconds = 37.8553 degrees
 */

using namespace std;

int main(int argc, char const *argv[])
{

  int degrees;
  double minutes;
  double seconds;

  double sum_degrees;

  cout << "Enter a latitude in degrees，minutes, and seconds:" << endl;
  cout << "First, enter the degrees: ";
  cin >> degrees;
  cout << "Next , enter the minutes of arc: ";
  cin >> minutes;
  cout << "Finall, enter the seconds of arc: ";
  cin >> seconds;

  sum_degrees = degrees + minutes / 60 + seconds / 3600;
  cout << degrees << " degrees, " << minutes << "minutes, " << seconds << " seconds = " << sum_degrees << " degrees" << endl;

  return 0;
}
