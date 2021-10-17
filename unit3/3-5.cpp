#include <iostream>

/**
 * 5. 编写一个程序，要求用户输入全球当前的人口和美国当前的人（或其他国家的人口)。
 * 将这些信息存储在 long long 变量中，并让程序显示美国（或其他国家）的人口占全球人口的任分比。
 * 该程序的物出应与下面类似： 
 * Enter the world's population: 6898758899
 * Enter the population of the US: 310783781
 * The population of the US is 4.50492% of the world population
 */

using namespace std;

int main(int argc, char const *argv[])
{
  long long global_person_num;
  long long us_person_num;
  double percent;

  cout << "Enter the world's population: ";
  cin >> global_person_num;

  cout << "Enter the population of the US: ";
  cin >> us_person_num;

  percent = double (us_person_num) / global_person_num * 100;

  cout << "The population of the US is " << percent << "% of the world population";
  return 0;
}

