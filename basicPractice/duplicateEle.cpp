#include<iostream>
using namespace std;

int main(){
    int n, arr[n];

    cout<<"Enter the size of an array"<<endl;
    cin>>n;

    cout<<"Enter the elements of an array"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                cout<<"Duplicate numbers are "<<arr[i];
            }
        }
    }
    return 0;
}
