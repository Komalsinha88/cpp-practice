//https://leetcode.com/problems/minimum-cuts-to-divide-a-circle/
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number in which circle divides "<<endl;
    cin>>n;

    if(n % 2 == 0){
        cout<<n/2<<endl;
    }else {
        cout<<n<<endl;
    }

    return 0;
}