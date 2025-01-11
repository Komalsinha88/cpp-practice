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
    int count=0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if (arr[i]==arr[j]){
                count++;
            }
        }
    }
    cout<<"Number of good pairs "<<count<<endl;


    return 0;
}