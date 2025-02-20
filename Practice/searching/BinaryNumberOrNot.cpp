//https://www.geeksforgeeks.org/problems/check-for-binary/1?page=1&difficulty=School&sortBy=submissions
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number "<<endl;
    cin>>n;

    if(n < 1 || n ==1 || n == 0){
        cout<<"False"<<endl;
    }
    while(n != 0)
    if (n % 10 > 1) {
        cout<<"False"<<endl;
    }
    n = n / 10;
    cout<<"True"<<endl;

return 0;
}