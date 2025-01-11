//https://leetcode.com/problems/harshad-number/description/
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number "<<endl;
    cin>>n;

    int dup = n;
    int sum = 0;
    while(n>0){
        int temp = n % 10;
        sum = sum + temp;
        n = n / 10;
    }
    if(dup % sum ==0 ){
        cout<<"Harshad number is "<<sum<<endl;
    } else {
        cout<<-1<<endl;
    }
    return 0;
}