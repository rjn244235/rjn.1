#include <iostream>
#include <string>
using namespace std;
int main() {
    // 1. 读取输入的ISBN字符串（格式保证正确，如 x-xxx-xxxxx-x）
    string isbn;
    cin >> isbn;

    // 2. 提取前9位有效数字（忽略分隔符'-'）
    string digits;
    for (char c : isbn) {
        if (c != '-') {
            digits += c;
        }
    }
    // 前9位数字用于计算，最后1位是输入的识别码
    string first9 = digits.substr(0, 9); //左闭右开
    char input_check = digits[9];//取第10个字符，即识别码

    // 3. 计算正确的识别码
    int sum = 0;
    for (int i = 0; i < 9; i++) {
        // 将字符数字转换为整数，乘以权重（i+1）
        sum += (first9[i] - '0') * (i + 1);  //字符转数字
    }
    int remainder = sum % 11;
    char correct_check;
    if (remainder == 10) {
        correct_check = 'X'; // 余数为10时识别码为X
    } else {
        correct_check = '0' + remainder; // 余数为0-9时转为字符
    }

    // 4. 验证并输出结果
    if (correct_check == input_check) {
        cout << "Right" << endl;
    } else {
        // 构造正确的ISBN字符串（替换最后一位识别码）
        string correct_isbn = isbn;
        correct_isbn[12] = correct_check; // ISBN最后一位的索引固定为12（格式x-xxx-xxxxx-x）
        cout << correct_isbn << endl;
    }

    return 0;
}