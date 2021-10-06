#include <iostream>
#include <string>

using namespace std;

/**
 * 编写一个 C++ 程序，它使用三个用户定义的程序 （包括 main），并生成下面的输出。
 * Three blind mice
 * Three blind mice
 * See how they run
 * See how they run
 */
void print(string str, int count) {
  for(int i = 0; i < count; i++) {
    cout << str << endl;
  }
}

int main(int argc, char const *argv[]) {
  print("Three blind mice", 2);
  print("See how they run", 2);
  return 0;
}
