#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number "<<endl;
    cin>>n;

    if(n == 1){
        cout<<"Number is not prime "<<endl;
        exit (0);
    }
    int count = 0;
    for(int i=2; i<=n; i++){
        if(n % i == 0){
            count++;
        }
    }
    if(count == 1){
        cout<<"Number is prime "<<endl;
    }else{
        cout<<"Number is not prime "<<endl;
    }
    return 0;
}