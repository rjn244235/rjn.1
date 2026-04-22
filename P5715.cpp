#include <iostream>
#include <algorithm>// 包含sort排序函数的头文件
using namespace std;
int main() {
    int num[3];
    // 输入3个无序的整数
    cin >> num[0] >> num[1] >> num[2];
    // 排序，使num[0]<num[1]<num[2]，对应题目A<B<C
    sort(num, num + 3);
    cout << num[0] << " " << num[1] << " " << num[2] << endl;
    return 0; 
}




