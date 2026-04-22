#include <iostream>
#include <cmath>
using namespace std;
int main() {
    const double pai = 3.14;
    int h,r,n;
    cin>>h>>r;
    if(0<h&&h<=500&&0<r&&r<=100){
    double volume = pai * r * r * h;
    int n = ceil(20000/volume);//向上取整
    cout<<n<<endl;
    return 0;
    }else{
    return 1;  
    }
}



