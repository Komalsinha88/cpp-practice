#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number "<<endl;
    cin>>n;
    int dup = n;

    int rev = 0;
    while(n>0){
        int temp = n % 10;
        rev = rev * 10 + temp;
        n = n /10;
    }
    if(dup == rev){
        cout<<"Number is palindrome "<<endl;
    }else{
        cout<<"Number is not palindrome "<<endl;
    }
    return 0;
}