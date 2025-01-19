//https://leetcode.com/problems/shuffle-the-array/description/
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of an array "<<endl;
    cin>>n;

    int arr[2*n];
    cout<<"Enter the elements of an array "<<endl;
    for(int i=0; i<2*n; i++){
        cin>>arr[i];
    }

    int result[2*n];
    for(int i=0; i<n; i++){
        result[2*i]=arr[i];
        result[2*i+1]=arr[i+n];
    }

    for(int i=0; i<2*n; i++){
        cout<<result[i];
    }

    return 0;
    
}