#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number n "<<endl;
    cin>>n;

    int sum = 0;
    for( int i = 1; i <= n; i++){
        sum = sum + i;
    }
    cout<<"Sum of the numbers are= "<<sum<<endl;
    return 0;
}