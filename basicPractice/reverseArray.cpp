#include<iostream>
using namespace std;

int main(){

    int n, arr[n], arr2[n];

    cout<<"Enter the size of an array"<<endl;
    cin>>n;

    cout<<"Enter the elements of an array"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int count=0;

    for(int i=n-1; i>=0; i--){
        arr2[count++]=arr[i];
    }
    for(int i=0; i<count; i++){
        cout<<arr2[i];
    }
    return 0;
}