#include <iostream>
#include <algorithm> // 用于sort排序函数
using namespace std;

int main() {
    int num[3];
    // 输入3个无序的整数
    cin >> num[0] >> num[1] >> num[2];
    // 排序，使num[0]<num[1]<num[2]，对应题目A<B<C
    sort(num, num + 3);
    
    char order[4]; // 4个字符，包括结束符'\0'
    // 输入3个大写字母的目标顺序（无空格）
    cin >> order;
    
    // 遍历目标顺序，按字母映射输出对应数字
    for (int i = 0; i < 3; i++) {
        if (order[i] == 'A') {
            cout << num[0];
        } else if (order[i] == 'B') {
            cout << num[1];
        } else if (order[i] == 'C') {
            cout << num[2];
        }
        // 除最后一个数外，后面加空格
        if (i < 2) {
            cout << " ";
        }
    }
    return 0;
}