#include<iostream>
using namespace std;

int main(){
    int n;

    cout<<"Enter the size of an array "<<endl;
    cin>>n;

    cout<<"Enter the elements of an array "<<endl;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int even=0, odd=0;
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    cout<<"Total number of even elements are "<<even<<endl;;
    cout<<"Total number of odd elements are "<<odd<<endl;
   
return 0;
}