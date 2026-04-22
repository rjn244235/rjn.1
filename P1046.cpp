#include <iostream>
using namespace std;
int main() {
    // 定义数组存储10个苹果的高度
    int apple[10];
    // 输入10个苹果的高度
    for (int i = 0; i < 10; i++) {
        cin >> apple[i];
    }
    // 输入陶陶伸直手的最大高度
    int height;
    cin >> height;
    // 计算陶陶踩板凳后能达到的总高度
    int total_height = height + 30;
    // 统计能摘到的苹果数
    int count = 0;
    for (int i = 0; i < 10; i++) {
        if (apple[i] <= total_height) {
            count++;
        }
    }
    // 输出结果
    cout << count << endl;
    return 0;
}