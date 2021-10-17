#include <iostream>

/**
 * 4. 编写一个程序，要求用户以整数方式输入秒数（使用 long 或 long long 变量存储），然后以天、小时、分钟和秒的方式显示这段时间．
 * 使用符号常最来表示每天有多少小时、每小时有多少分钟以及每分钟有多少秒。该程序的输出应导卜面类似： 
 * Enter the number of seconds: 31600000
 * 3160000 seconds 365 days, 17 hours，46 minutes, 40 seconds．
 */

using namespace std;

int main(int argc, char const *argv[])
{
  long sum_seconds;

  long days;
  long hours;
  long minutes;
  long seconds;

  cout << "Enter the number of seconds: ";
  cin >> sum_seconds;

  days = sum_seconds / 60 / 60 / 24;
  hours = sum_seconds / 60 / 60 % 24;
  minutes = sum_seconds / 60 % 60;
  seconds = sum_seconds % 60;

  cout << sum_seconds << " seconds " << days << " days, " << hours << " hours，" << minutes << " minutes, " << seconds << " seconds．";

  return 0;
}
