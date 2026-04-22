#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double s, v;
    cin >> s >> v;
    
    // 计算行走时间（向上取整）：(s + v - 1) / v 等价于 ceil(s / v)
    int walk_time = ceil(s / v);
    // 总耗时 = 行走时间 + 垃圾分类10分钟
    int total_time = walk_time + 10;
    
    // 8:00 对应的分钟数
    int arrive_time = 8 * 60;
    // 计算出发时间（分钟数）
    int depart_time = arrive_time - total_time;
    
    // 处理跨天情况（提前不超过一天）
    if (depart_time < 0) {
        depart_time += 24 * 60;
    }
    
    // 转换为小时和分钟
    int hour = depart_time / 60; // 整除自动舍弃小数部分，得到小时
    int minute = depart_time % 60;// 取余得到分钟
    
    // 格式化输出，确保两位数字，不足补0
    cout << setw(2) << setfill('0') << hour << ":" 
         << setw(2) << setfill('0') << minute << endl;// setw设置宽度，setfill设置填充字符
    
    return 0;
}