#include<iostream>
using namespace std;

int main(){
    int n, arr[n];

    cout<<"Enter the size of an array "<<endl;
    cin>>n;

    cout<<"Enter the elements of an array "<<endl;
    for(int i=0; i<n; i++){
    cin>>arr[i];
    }
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    cout<<sum<<endl;
    return 0;
}