//https://leetcode.com/problems/count-the-digits-that-divide-a-number/description/
#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number "<<endl;
    cin>>num;

    int dup = num;
    int count=0;
    while(num>0){
        int temp = num % 10;
        num = num / 10;
        if(dup % temp ==0){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}