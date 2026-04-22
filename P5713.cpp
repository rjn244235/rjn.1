#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=5*n;
    int b=3*n+11;
    if(a<b){
        cout<<"Local"<<endl;
    }
    else {
        cout<<"Luogu"<<endl;
    }
    return 0;
}
