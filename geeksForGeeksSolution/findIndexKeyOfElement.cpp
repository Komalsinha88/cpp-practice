#include<iostream>
using namespace std;

int main(){
    int n;

    cout<<"Enter the size of an array "<<endl;
    cin>>n;

    int key;
    cout<<"Enter the key "<<endl;
    cin>>key;
    
    int arr[n];
    cout<<"Enter the elements of an array "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<arr[key];
    return 0;
}