#include <iostream>
/**
 * 2. 编写一个小程序，要求以几英尺几英寸的方式输入其身高，并以磅为单位输入其体重。（使用3个变量来存储这些信息。）该程序报告其 BMI。
 * 为了计算 BMI，该程序以英寸的方式指出用户的身高（1英尺为12英寸），并将以英寸为单位的身高转换为以米为单位的身高（1英寸=0.0254米）。
 * 然后，将以磅为单位的体重转换为以千克为单位的体重（1千克=2.2磅）。最后，计算相应的BMI--体重除以身高的平方。用符号常量表示各种转换因子。
 */

using namespace std;

int main(int argc, char const *argv[])
{
    // 英寸 * inch_to_meter
    const float inch_to_meter = 0.0254f;
    // 英尺 * feet_to_inch
    const short feet_to_inch = 12;
    // 千克 * kg_to_pound
    const float kg_to_pound = 2.2f;

    // 输入的身高英尺
    int stature_feet;
    // 输入的身高英寸
    int stature_inch;
    // 输入的体重(以磅为单位)
    int weight;

    cout << "请输入的你的身高(英尺部分)：___\b\b\b";
    cin >> stature_feet;
    cout << "请输入的你的身高(英寸部分)：___\b\b\b";
    cin >> stature_inch;
    cout << "请输入的你的体重(单位：磅)：___\b\b\b";
    cin >> weight;

    // 身高米
    float stature_meter = (feet_to_inch * stature_feet + stature_inch) * inch_to_meter;
    cout << "身高（单位：米）:" << stature_meter << "m" << endl;

    // 千克体重
    float kg_weight = weight / kg_to_pound;

    cout << "体重（单位：kg）:" << kg_weight << "kg" << endl;

    float BMI = kg_weight / stature_meter / stature_meter;

    cout << "BMI:" << BMI << endl;

    return 0;
}
