#include <iostream>
#include <cctype> // 包含 toupper() 函数
using namespace std;
int main() {
    char c;
    cin >> c;
    cout << (char)toupper(c); // toupper() 直接返回大写字符的 ASCII 码
    return 0;
}
















