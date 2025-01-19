//https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/description/
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number "<<endl;
    cin>>n;

    int temp, sum = 0, prod = 1;
    while(n>0){
        temp = n % 10;
        sum = sum + temp;
        prod = prod * temp;
        n = n / 10 ;
    }
    cout<<"Difference of the product and sum of number is "<<prod - sum<<endl;
    return 0; 
}