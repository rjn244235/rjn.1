#include <bits/stdc++.h> 是 C++ 里一个万能头文件的引入语句，核心作用是一次性包含 C++ 标准库中几乎所有常用的头文件

**double**类型的如果计算结果是整数或者有限小数，输出结果不变。
否则保留六位有效数字。

**ceil**：向上取整，需要引入头文件<cmath>
ceil(n)，n为double类型，可强制转换为int类型
int类型默认向下取整

**sqrt**：开根号，引入<cmath>

(char)toupper(c)，toupper可将小写字母转换为大写字母，
需引入头文件<ccpyte>

setprecision(3)会表示「整个数的有效数字为 3 位」需引入头文件<iomanip>
而fixed << setprecision(3)<< 
**fixed**：设置定点输出格式，让setprecision的精度值仅针对小数点后的位数

**setw(2)**：设置下一个输出内容的宽度为2，占两个字符，需引入头文件<iomanip>（只对紧跟的一个输出有效）。

**setfill('0')**：设置当输出宽度不足时，填充的字符为0，需引入头文件<iomanip>（设置后一直有效，直到重新修改）。

bool n = x%2==0，设置布尔类型变量n,表示n为偶数
逻辑运算符有&&(与)、||(或)、!(非)、^(异或)，异或指的是满足且只满足一个

**字符串**是字符的有序集合，能精准找到小数点、截取数字位，要先引入头文件<string>，定义string x = ······
因此想要操作某个小数的某一位，要把它定义为字符串类型。

**find('.')**：string 类的成员函数，作用是在字符串中查找字符“.”的第一次出现位置，返回该位置的索引（从 0 开始计数）；

**string.substr**(起始索引, 截取长度)，如果省略第二个参数，默认截取到字符串末尾

**reverse()**：头文件<algorithm>中的通用反转函数。
作用是反转容器 / 字符串中「起始迭代器」到「结束迭代器」之间的所有内容；
例如：reverse(digits.begin(), digits.end());
**digits.begin()**：返回 digits 字符串的起始迭代器（指向第一个字符的位置）；
**digits.end()**：返回 digits 字符串的结束迭代器（指向最后一个字符的下一个位置，是 C++ 的左闭右开规则）

**stod()（转 double）、stof()（转 float）、stoi()（转 int），是 C++ 处理字符串和数值转换的常用工具**

**min max**最小值最大值函数需要引入头文件<algorithm>

INT_MAX是 C++ 定义的整数最大值（约 21 亿）

int common_div = gcd(a,b); 求a，b的最大公约数，需要引入头文件<numeric>









