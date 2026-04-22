#include<iostream>
using namespace std;
int main(){
    int y,m;
    cin>>y>>m;
    if(1<=m&&m<=12){
        if(m==1||m==3||m==5||m==7||m==8||m==10||m==12){
            cout<<31<<endl;
        }
        else if(m==4||m==6||m==9||m==11){
            cout<<30<<endl;
        }
        else{
            bool p1 = y%4==0 && y%100!=0, p3 = y%400==0;
            if(p1||p3){
                cout<<29<<endl;
            }
            else{
                cout<<28<<endl;
            }
        }
        return 0;
    }
    else{
        return 1;
    }
}
