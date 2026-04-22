#include <iostream>
using namespace std;
int main() {
    int max_hour = 8;  // 初始最长时长为8，≤8不不高兴
    int ans = 0;       // 结果，初始为0（无不高兴）
    // 遍历7天，i从1到7对应周一到周日
    for (int i = 1; i <= 7; i++) {
        int school, mom;  // 学校上课时间、妈妈安排时间
        cin >> school >> mom;
        int total = school + mom;  // 当天总上课时长
        // 只有总时长超过当前最长超时时长，才更新结果
        if (total > max_hour) {
            max_hour = total;  // 更新最长时长
            ans = i;           // 更新为当前星期数
        }
    }
    // 输出结果：0表示无不高兴，否则是对应星期数
    cout << ans << endl;
    return 0;
}
