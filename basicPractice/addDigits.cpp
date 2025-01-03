//https://leetcode.com/problems/add-digits/description/
#include<iostream>
using namespace std;
int main(){
    int n; 
    cout<<"Enter a number "<<endl;
    cin>>n;

    while(n>9){
        int temp = n % 10;
        n = n / 10;
        n = n + temp;
        
    }
    cout<<n;
    return 0;
}