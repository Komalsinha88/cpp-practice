#include<iostream>
using namespace std;

int main(){
    int a, b, temp;

    cout<<"Enter a"<<endl;
    cin>>a;

    cout<<"Enter b"<<endl;
    cin>>b;

    temp=a;
    a=b;
    b=temp;

    cout<<"After swapping "<<"a= "<<a<<"b= "<<b<<endl;

    return 0;



}