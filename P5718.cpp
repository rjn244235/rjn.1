#include <algorithm>  
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cout << *min_element(a.begin(), a.end()) << endl; //输出最小值
    return 0;
}