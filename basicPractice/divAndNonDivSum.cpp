//https://leetcode.com/problems/divisible-and-non-divisible-sums-difference/description/
#include<iostream>
using namespace std;

int main(){
    int n, m;
    cout<<"Enter the number n and m "<<endl;
    cin>>n>>m;

    int sum = 0, sum1 = 0;
    for(int i=1; i<=n; i++){
        if(i % m == 0){
            sum = sum + i;
        } else {
            sum1 = sum1 + i;
        }

    }
    cout<<sum1 - sum<<endl;


    return 0;
}
