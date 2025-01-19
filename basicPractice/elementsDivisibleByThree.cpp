//https://leetcode.com/problems/find-minimum-operations-to-make-all-elements-divisible-by-three/
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

    int count = 0; 
    for(int i=0; i<n; i++){
        if(arr[i] % 3 != 0){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;

}