#include<iostream>
using namespace std;
int main(){
    int n;

    cout<<"Enter a number"<<endl;
    cin>>n;
    int dup=n;
    int rev=0;
    while(n){
        int temp = n % 10;
        rev = rev * 10 + temp;
        n = n / 10;
    }
    if(dup==rev){
        cout<<"True"<<endl;
    } else{
        cout<<"False"<<endl;
    }
    return 0;
}