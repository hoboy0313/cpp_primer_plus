#include <iostream>
/**
 * 1. 编写一个小程序，要求用户使用一个整数指出自己的身高（单位为英寸），然后将身高转换为英尺和英寸。
 * 该程序使用下划线字符来指示输入位置。另外，使用一个 const 符号常量来表示转换因子。
 * 
 * 1英尺 = 12 英寸
 */

using namespace std;

void transferStature() {
    const int rate = 12;
    int stature;
    cout << "请输入你的身高(单位：英寸)：____\b\b\b\b";
    cin >> stature;
    cout << "你的身高是：" << stature / rate << "英尺" << stature % rate << "英寸" << endl;
}

int main(int argc, char const *argv[])
{
    transferStature();
    return 0;
}
