#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool p1 = n%4==0 && n%100!=0, p3 = n%400==0;
    cout<<(p1||p3);
}