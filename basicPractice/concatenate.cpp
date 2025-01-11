//https://leetcode.com/problems/concatenation-of-array/description/
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of an array "<<endl;
    cin>>n;

    int nums[n];
    cout<<"Enter the elements of an array "<<endl;
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }

    int ans[2 * n];
    
    for(int i=0; i<n; i++){
        ans[i] = nums[i];
    }
    for(int i=0; i<n; i++){
        ans[i+n] = nums[i];
    }
    for(int i=0; i<2*n; i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}