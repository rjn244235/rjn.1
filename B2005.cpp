#include <iostream>
using namespace std;
int main() {
    char a;
    cin>>a;
    for(int i=1;i<=3;i++){
        for (int j = 3 - i; j > 0; --j) {
            cout << " ";
        }
        for(int k=1;k<=(2*i-1);k++){
            cout<<a;
        }
        cout<<endl;
    }       
    return 0;
    }