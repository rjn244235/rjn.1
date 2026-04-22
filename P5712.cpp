#include<iostream>
using namespace std;
int main(){   
    int n;
    cin>>n;
    switch(n){
        case 0:{
            cout<<"Today, I ate 0 apple."<<endl;
            break;
        }
        case 1:{
            cout<<"Today, I ate 1 apple."<<endl;
            break;
        }
        default:{
            cout<<"Today, I ate "<<n<<" apples."<<endl;
            break;
        }
    }
}