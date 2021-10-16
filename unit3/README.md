# 第三章 处理数据

## 3.1 简单变量
数据类型有：基本类型、复合类型

> 至少是因为很多系统对位的设定是不一样的，只要符合规范即可。

### 1 基本分类
变量分为：简单类型和复杂类型

数据类型有：
short (int) 至少16位
int         至少16位，至少和 short 一样长
long (int)  至少32位，至少和 int 一样长
long long (int) 至少64位，且至少和 long 一样长
char
bool
float
double
auto

想知道好类型的长度，可以使用 sizeof 来

### 2. 无符号类型
符号就是在类型前加 `signed` 或 `unsigned`.

正常情况下是存在符号位的，如果需要无符号类型，则使用关键字 `unsigned`.

### 3. 8进制 & 16进制
八进制则在开头加 0
十六进制则在开头家 0x

举例：42
八进制：042
十六进制：0x42

正常情况下，输出都是10进制，如果想输出 8进制 或者 16进制， instream 中存在 hex 和 oct；
```c
cout << hex << 0x42 << endl;
```

### 4. cout.put()
函数方式加入到输出文字。

```c++
cout << "abcd";
cout.put('e');
cout.put('f');
```

### 5. bool

其他类型都会被隐式转换成 bool 类型

```c++

bool a = true;
bool b = false;

bool c = -100; // true
bool d = 0; // false

```

### 6. char
除了 `char` ，还有 `wchar_t` 用于声明 宽字符。
此外，C++11 还给出了 `char16_t` 和 `char32_t`;

其中，`char16_t` 表示如：`u'q'` 或者，`u'/U00F6'`;
`char32_t` 表示, 如：`U'q'` 或者，`U'/U000000F6'`

## 3.2 const 限定符
声明常量。建议初始化。

相比于 `#define`, 
- `const` 可以具备类型
- 可以把这些定义写到特定函数或文件中
- 可以声明复杂类型

## 3.3 浮点数
```c++
float a = 1.0;
double b = 2.0;

float c = 1.0f;
float d = (float)1.0;
```

## 3.4 C++ 算术运算符


## 疑问

1. `static_cast` 是什么？(`static_cast<int>('Z')`)
