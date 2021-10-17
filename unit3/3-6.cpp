#include <iostream>

/**
 * 6 ．编写一个程序，要求用户输入驱车里程（英里）和使用汽油量（加仑），然后指出汽车耗油量为一加仑的里程。如果愿意，
 * 也可以让程序要求用户以公里为单位输入距离，并以升作为单位输入汽油量，然后指出欧洲风格的结果一一即每 100 公里的耗油量(升)。
 */

using namespace std;

int main(int argc, char const *argv[])
{
  double distance;
  double oil;

  cout << "行驶距离(英里)：";
  cin >> distance;
  cout << "行驶汽油量(加仑)：";
  cin >> oil;

  cout << "每 100 英里的耗油量(加仑): " << oil / distance * 100 << endl;
  return 0;
}

