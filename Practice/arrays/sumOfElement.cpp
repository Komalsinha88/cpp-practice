#include<iostream>
using namespace std;

int main(){
    int A[10], sum = 0;

    for(int i=0; i<10; i++){
        cin>>A[i];
    }

    for(int x:A){
        sum=sum+x;

        cout<<sum<<endl;
    }

   // cout<<"Sum of all the elements of an array is "<<sum<<endl;

    return 0;


}