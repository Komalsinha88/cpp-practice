#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    int arr[n];

    cout<<"Enter the size of an array "<<endl;
    cin>>n;

    cout<<"Enter the elements"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0; i<n; i++){
        sum = sum + arr[i] * pow(10, i);
    }

    cout<<sum<<endl;
    return 0;

}