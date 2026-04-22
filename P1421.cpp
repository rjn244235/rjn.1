#include<iostream>
using namespace std;  
int main(){
    int a,b;
    cin>>a>>b;
    if(0<=a&&a<=10000 && 0<=b&&b<=9) {
        int total_money=a*10+b;
        int total_pen=total_money/19;
        cout<<total_pen<<endl;
        return 0;
    }
    else{
        return 1;
    }
}