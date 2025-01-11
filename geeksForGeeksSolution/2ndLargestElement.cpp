//https://www.geeksforgeeks.org/problems/second-largest3735/1?page=1&difficulty=Easy&sortBy=submissions
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

    int max=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }

    int secondMax=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>secondMax && arr[i]!=max){
            secondMax=arr[i];
        }
    }

    cout<<"Second largest elements of an array is "<<secondMax<<endl;

    return 0;
    
}