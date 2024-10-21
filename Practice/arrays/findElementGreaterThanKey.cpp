#include<iostream>
using namespace std;
int main(){
    int n, arr[n];

    cout<<"Enter the size of an array "<<endl;
    cin>>n;

    cout<<"Enter the elements of an array "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key "<<endl;
    cin>>key;

    for(int i=0; i<n; i++){
    if(key==arr[i]){
        if(arr[i]>key)
    }
    cout<<arr[i]<<endl;
    else{
        cout<<"Key not found"<<endl;
    }
    }
    return 0;
}