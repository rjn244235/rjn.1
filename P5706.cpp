#include <iostream>
#include <iomanip>  // 用于设置输出精度
using namespace std;
int main() {
    double t;
    int n;
    cin >> t >> n;    
    // 计算每名同学获得的饮料量
    double per_drink = t / n;
    // 计算总杯子数
    int total_cups = n * 2;   
    // 输出三位小数的饮料量
    cout << fixed << setprecision(3) << per_drink << endl;//fixed用于设置定点格式，setprecision(3)设置小数点后三位
    // 输出总杯子数
    cout << total_cups << endl;   
    return 0;
}

