#include <iostream>

using namespace std;

/**
 * 编写一个程序，让用户输入其年龄，然后显示该年龄包含了多少个月。
 */

int main(int argc, char const *argv[]) {
  int age;

  cout << "Enter your age:"; cin >> age;

  cout << endl;

  cout << "It's including " << age * 12 << " months" << endl;
  return 0;
}
