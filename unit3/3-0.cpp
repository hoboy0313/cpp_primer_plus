/**
 * 复习题
 */
#include <iostream>

using namespace std;
/**
 * 1. 为什么 C++ 有多种整型？
 * 答：为了满足不同的需求，例如某动物的数量我们就可以用无符号型，数值不大时，我们可以用short节省空间。
 * 
 * 2. 声明与下述描述相符的变量。
 *  a. short 整数，值为 80
 *  b. unsigned int 整数，值为 42110
 *  c. 值为 3000000000 的整数
 *  答：a: short a = 80;  b: unsigned int = 42110; c: unsigned long c = 3000000000;
 *
 * 3. C++ 提供了什么措施来防止超出整型的范围？
 * 答：C++没有自动防止超出整型的范围，但是可以查阅头文件climits
 *
 * 4. 33L 与 33 之间有什么区别？
 * 答：类型不同，33L 为 long 型， 33 为 int 型。
 * 
 * 5. 下面两条 C++ 语句是否等价？
 *  char grade = 65;
 *  char grade = 'A';
 * 答：不一定，在 ASCLL 码系统下是相同的，在其他一些编码下可能不同。
 * 
 * 6. 如何使用 C++ 来找出编码 88 表示的字符？指出至少两种方法。
 * 答：1. char ch1 = 88; 2. 转义字符\130或\x58
 *
 * 7. 将 long 值赋给 float 变量会导致舍入误差，将 long 值赋给 double 变量呢？将 long long 值赋给 double 变量呢？
 * 答：需要看系统，double 在任何系统下都是 64位，都是 1位符号位，11位指数位，52位尾数位。因此，最大有效数字为 2^52 = 4503599627370496，一共 16 位。
 * 而 long, 在32位系统下，4个字节，即 2^32，该数字有效位数 10 位，因此不会丢失。在 64 位系统下，long 为 8个字节，即 2^64，比 2^52 肯定大。因此，会丢失精度。
 * 而 long long, 在任何系统下都是 64 位，因此必定会舍去误差。
 *
 * 8. 下列 C++ 表达式的结果分别是多少？
 *  a. 8 * 9 + 2
 *  b. 6 * 3 / 4
 *  c. 3 / 4 * 6
 *  d. 6.0 * 3 / 4
 *  e. 15 % 4
 * 答：a: 74;  b: 4;  c: 0;  d: 4.5; e: 3;
 *
 * 9. 假设 x1 和 x2 是两个 double 变量，您要将它们作为整数相加，再将结果赋给一个整型变量。请编写一条完成这项任务的 C++ 语句。如果要将它们作为 double 值相加并转换为 int 呢？
 * 答：int sum = (int)x1 + (int)x2;      int sum = (int)(x1 + x2);
 *
 * 10. 下面每条语句声明的变量都是什么类型？
 *  a. auto cars = 15
 *  b. auto iou = 150.37f
 *  c. auto level = 'B'
 *  d. auto crat = U'/U00002155'
 *  e. auto fract = 8.25f / 2.5
 * 答：a: int; b: float; c: char; d: char32_t; e: double;
 */


int main(int argc, char const *argv[])
{

    cout << sizeof(long) << endl;
    cout << sizeof(long long) << endl;
    cout << LONG_MAX << endl;
    cout << LLONG_MAX << endl;

    double x1 = 1.845;
    double x2 = 3.463;
    int sum = (int)x1 + (int)x2;
    int sum1 = (int)(x1 + x2);
    cout << sum << '-' << sum1 << endl;
    return 0;
}
