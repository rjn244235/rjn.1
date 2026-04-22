#include <iostream>
using namespace std;
int main() {
    int x,n;
    cin >> x >> n;
    if(x>=1&&x<=7&&n>=1&&n<=1000000){
        int total = 0;
        for(int i=0; i<n; i++){
            int current_day = (x+i-1)%7+1;
            if(current_day!=6 && current_day!=7){
                total += 250;
            }
        }
        cout << total << endl;
        return 0;
    }else{
        return 1;
    }
}