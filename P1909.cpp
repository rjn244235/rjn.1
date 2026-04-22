#include<iostream>
#include<cmath>   // 用于ceil向上取整
#include<algorithm>// 用于min函数
#include<climits>  // 用于INT_MAX（整数极大值）
using namespace std;
int main(){
    double n;
    cin>>n;
    int min_cost = INT_MAX; // 初始化最小花费为极大值，关键！
    for(int i=1;i<=3;i++){
        double pencil_nums;
        double pencil_price;
        cin>>pencil_nums>>pencil_price;    
        // 计算当前包装的总花费
        int total_price=ceil(n/pencil_nums)*pencil_price;
        // 用min函数更新最小花费，转int是因为花费是整数
        min_cost = min(min_cost, total_price);
    } 
    // 循环结束后输出最终的最小花费
    cout<<min_cost<<endl;
    return 0;
}