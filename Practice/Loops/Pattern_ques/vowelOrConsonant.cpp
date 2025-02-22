#include<iostream>
using namespace std;

int main(){
    char x;
    cout<<"Enter the alphabet "<<endl;
    cin>>x;

    if(x == 'a'|| x == 'e' || x == 'i'|| x == '0' || x == 'u' ){
        cout<<"Yes, it is vowel"<<endl;
    }else{
        cout<<"No, it is not vowel "<<endl;
    }
    return 0;
}