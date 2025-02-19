#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;

    int dup = n; 

    int temp, sum = 0;
    while(n>0){
        temp = n % 10;
        n = n / 10;
        sum = sum + (temp * temp * temp);
    }
    if(dup == sum){
        cout<<"Number is armstrong"<<endl;
    }else{
        cout<<"Number is not armstrong"<<endl;
    }
    return 0;
}