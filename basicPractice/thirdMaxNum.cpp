//https://leetcode.com/problems/third-maximum-number/
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of an array "<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter the element of an array "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int Max=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>Max){
            Max=arr[i];
        }
    }
    int i, dup=arr[i];

    int secondMax=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>secondMax && arr[i]!=Max){
            secondMax=arr[i];
        }
    }

    int thirdMax=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>thirdMax && arr[i]!=secondMax && arr[i]!=Max){
            thirdMax=arr[i];
        }
    }

    int i;
    if(thirdMax= arr[i]){
        cout<<"Output: "<<arr[i]<<end;
    }
    else{
        cout<<"Output: "<<dup<<endl;
    }
    return 0;
}