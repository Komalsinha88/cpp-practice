#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the digit "<<endl;
    cin>>n;

    while(n != 0){
        int temp = n % 10;
        n = n / 10;
        n = n + temp;

    cout<<"SUM OF THE DIGITS= "<<n;
    return 0;
}