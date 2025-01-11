//https://leetcode.com/problems/smallest-even-multiple/description/
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number "<<endl;
    cin>>n;

    if(n%2==0){
        cout<<"Smallest even multiple is "<<n;
    }
    else{
        cout<<"Smallest even multiple is "<<n*2;
    }

    return 0;
}