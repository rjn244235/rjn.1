#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    double m,t,s;
    cin>>m>>t>>s;
    if(t==0){
        cout<<0<<endl;
        return 0;
    }
    else if(1<=m && m<=100 && 1<=t && t<=100 && 1<=s && s<=10000 ){
        n = m- ceil(s/t);//向上取整，这里m，s，t均为double类型
        if(n>=0){
            cout<<n<<endl;
        }
        else{
            cout<<0<<endl;
        }
        return 0;
    }
    else{
        return 1;
    }
}














