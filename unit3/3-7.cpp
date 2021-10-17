#include <iostream>

/**
 *  7．编写一个程序，要求用户按欧洲风格输入汽油的耗油量(每100公里消耗的汽油量(升)) ，然后将其转换为美国风格的耗油量一一每加仑多少英里。
 * 注意，除了使用不同的单位计里外，美国方法（距离／燃料）与欧洲方法（燃料／距离）相反。 100 公里等于 62.14 英里， 1加仑等于 3.875 升。
 * 因此，19mpg 大约合 12.41/100km, 27mpg 大约合 8.71/100km 。
 */

using namespace std;

int main(int argc, char const *argv[])
{
  double quantity;

  // 每100公里消耗的汽油量(升)，单位 L/100km
  cout << "汽油的耗油量（欧式）：";

  cin >> quantity;

  double result = 1 / (quantity / 3.875 / 62.14);

  cout << "每 100 英里的耗油量(加仑): " << result << endl;
  return 0;
}

