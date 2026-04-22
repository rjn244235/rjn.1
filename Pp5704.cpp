#include <iostream>
using namespace std;
int main() {
    char c;
    cin >> c;
    // 判断是否为小写字母（ASCII 97-122）
    if (c >= 'a' && c <= 'z') {
        c = c - 32; // 减去 32 得到对应大写字母的 ASCII 码
    }
    cout << c;
    return 0;
}