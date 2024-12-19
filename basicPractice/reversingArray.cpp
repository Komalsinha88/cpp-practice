#include<iostream>
using namespace std;

int main(){
    int n;

    cout<<"Enter the size of an array"<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of an array"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int start=0, end=n-1, temp=0;
    while(start<end){
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
    return 0;
}