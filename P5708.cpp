#include <iostream>
#include <cmath>
#include <iomanip>  // 用于设置输出精度
using namespace std;
int main() {
    double a,b,c;
    cin>>a>>b>>c;
    double p=(a+b+c)/2;
    double area=sqrt(p*(p-a)*(p-b)*(p-c));
    cout<<fixed<<setprecision(1)<<area<<endl;
    return 0;
}







