#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of an array "<<endl;
    cin>>n;

    cout<<"Enter the elements of an array "<<endl;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int max=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
//snippet for 2nd max

    int secondMax = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>secondMax && arr[i]!=max){
            secondMax=arr[i];
        }
    }
    cout<<"Second largest number in the array is "<<secondMax<<endl;
    return 0;
}