//Write a program to read and display n numbers using an array
#include<iostream>
using namespace std;

int main (){
    int n;
    cout<<"Enter the size of an array"<<endl;
    cin>>n;

    cout<<"Enter the number of an element"<<endl;
    for(int i=0; i<n; i++){
        cout<<i<<endl;
    }
    return 0;
}