#include<iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if((0<=a&&a<24)&&(0<=b&&b<60)&&(0<=c&&c<24)&&(0<=d&&d<60&&(a<=c))){
    int practice_time=c*60+d-(a*60+b);
    int e=practice_time/60;
    int f=practice_time%60;
    cout<<e<<" "<<f<<endl;
    return 0;
    }else{
    return 1;
    }
}