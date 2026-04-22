#include <iostream>
#include <numeric>
#include <vector>   // 包含vector容器的头文件
#include <algorithm>// 包含sort排序函数的头文件
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;   
    // 1. 创建vector容器，存入三个数
    vector<int> nums = {a, b, c};
    // 2. 调用sort函数排序，默认就是从小到大排序
    sort(nums.begin(), nums.end());
    // 3. 输出排序后的三个数，空格隔开
    int x=nums[0], y=nums[1], z=nums[2];
    int common_div = gcd(x,z);
    cout<<x/common_div<<"/"<<z/common_div<<endl;
}
