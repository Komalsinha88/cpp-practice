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
    int f[n];
    int visited= -1;
    for(int i=0; i<n; i++){
        int count=0;
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                count++;
                f[j]=visited;
            }
        }
        if(f[i]!=visited){
            f[i]=visited;
        }
    }
    cout<<"Frequency of elements are "<<endl;
    for(int i=0; i<n; i++){
        if(f[i]!=visited){
            cout<<arr[i]<<" : "<<f[i]<<endl;
        }
    }
    return 0;
}