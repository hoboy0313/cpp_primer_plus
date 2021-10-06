#include <iostream>

/**
 * 编写一个 C++ 程序，要求它输入一个以 long 为单位的距离，然后将它转化为码 （一 long 等于 220码）
 */

int main(int argc, char const *argv[]) {
  using namespace std;

  int distance;

  cout << "「距离转化」 请输入距离：（单位long）" << endl;
  cin >> distance;
  cout << distance << "long 为" << distance * 220 << "码。" << endl;
  return 0;
}
