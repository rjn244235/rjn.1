#include <iostream>
using namespace std;
int main() {
    int x; 
    cin >> x;
    bool p1 = x%2 == 0, p2 = x>4 && x<=12;
    cout << (p1&&p2) << " " << (p1||p2) << " " << (p1^p2) << " " << (!p1&&!p2);
    return 0;
}
//逻辑运算符有且仅有&&(与)、||(或)、!(非)、^(异或)