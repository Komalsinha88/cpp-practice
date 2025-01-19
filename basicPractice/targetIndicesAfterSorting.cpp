//https://leetcode.com/problems/find-target-indices-after-sorting-array/
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of an array "<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of an array "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int target;
    cout<<"Enter the target value "<<endl;
    cin>>target;

    int temp;
    for(int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            if(arr[i]>arr[j]){
               temp = arr[i];
               arr[i] = arr[j];
               arr[j] = temp; 
            }
        }
    }

    for(int i=0; i<n; i++){
        if(arr[i]==target){
            cout<<i<<" ";
        }
    }
    return 0;
}