#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number "<<endl;
    cin>>n;

    int arr[n];

    cout<<"Enter the elements of arrays "<<endl;
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }



    return 0;
}