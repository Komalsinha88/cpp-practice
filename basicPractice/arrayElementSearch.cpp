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

    int key;
    cout<<"Enter the key "<<endl;
    cin>>key;

    for(int i=0; i<n; i++){
        if(key==arr[i]){
            cout<<"Key found at "<<i<<endl;
            return 0;
        }
    }
    cout<<"key not found "<<endl;
    return 0;
}