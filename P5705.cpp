#include <iostream>
#include <string>// 包含 string 类
#include <algorithm>// 包含 reverse() 函数
using namespace std;
int main() {
    // 读取输入的浮点数并转换为字符串，方便处理每一位
    string numStr;
    cin >> numStr;
    // 找到小数点的位置
    size_t dotPos = numStr.find('.');
    // 拼接小数点前后的字符（去掉小数点），得到完整的数字串
    string digits = numStr.substr(0, dotPos) + numStr.substr(dotPos + 1);
    // 反转数字串
    reverse(digits.begin(), digits.end());
    // 构造反转后的字符串：第一位 + 小数点 + 剩余位
    string reversedStr;
    reversedStr += digits[0];
    reversedStr += '.';
    reversedStr += digits.substr(1);
    // 转换为浮点数并输出（也可直接输出字符串，结果一致）
    double result = stod(reversedStr); //stod函数将字符串转换为双精度浮点数
    cout << result << endl;
    return 0;
}












