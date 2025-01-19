//https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/description/
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

    int temp[n];
    for(int i=0; i<n; i++){
        int count = 0;
        for(int j=0; j<n; j++){
            if(arr[j]<arr[i])
            count++;
        }
        temp[i]=count;
    }

    for(int i=0; i<n; i++){
        cout<<temp[i]<<endl; 
    }
    
    return 0;

}