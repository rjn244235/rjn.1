#include <iostream>
#include <vector>   
#include <algorithm>//包含算法库以使用sort函数
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;   
    vector<int> nums = {a, b, c};
    sort(nums.begin(), nums.end());
    cout << nums[0] << " " << nums[1] << " " << nums[2] << endl;
    
    int x=nums[0], y=nums[1], z=nums[2];
    if(x+y<=z){
        cout<<"Not triangle"<<endl;
        return 0;
    }
        
    if(x*x+y*y==z*z){
        cout<<"Right triangle"<<endl;
        }
        else if(x*x+y*y>z*z){
        cout<<"Acute triangle"<<endl;
        }
        else if(x*x+y*y<z*z){
        cout<<"Obtuse triangle"<<endl;
        }
    
    if(x==y || y==z || x==z){
        cout<<"Isosceles triangle"<<endl;
        }
    if(x==y && y==z){
        cout<<"Equilateral triangle"<<endl;
        }
    return 0;
}


