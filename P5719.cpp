#include <iostream>
#include <iomanip>  // 用于设置输出精度
using namespace std;
int main() {
    int n,k;
    cin >> n >> k;
    int count_1 = 0, count_2 = 0;
    double sum_1 = 0, sum_2 = 0;
    for(int i = 1; i <= n; i++){
        if(i % k==0){
            count_1++;
            sum_1 += i;
        }
        else{
            count_2++;
            sum_2 += i;
        }
}
cout<<fixed<<setprecision(1)<<sum_1/count_1<<" "<<fixed<<setprecision(1)<<sum_2/count_2<<endl;
return 0;
}