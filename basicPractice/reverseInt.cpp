#include<iostream>
using namespace std;

int main(){
    int n, rev=0;
    cout<<"Enter a number"<<endl;
    cin>>n;

    cout<<"original number is "<<n<<endl;

    while(n>0){
        int temp=n%10;
        rev = rev * 10 + temp;
        n = n / 10;
    }

    cout<<"Reverse of the number is "<<rev<<endl;

    return 0;
}