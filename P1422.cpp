#include<iostream>
#include<iomanip>  // 用于setprecision设置小数位数
using namespace std;
int main(){
    int m;
    cin>>m;
    if(0<m&&m<=150){
    cout<<fixed<<setprecision(1)<<m*0.4463<<endl;
}
    else if(150<m&&m<=400){
        cout<<fixed<<setprecision(1)<<150*0.4463+(m-150)*0.4663<<endl;
    }
    else if(400<m&&m<=10000){
        cout<<fixed<<setprecision(1)<<150*0.4463+250*0.4663+(m-400)*0.5663<<endl;
    }
return 0;
}