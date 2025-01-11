//https://leetcode.com/problems/find-the-pivot-integer/description/
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number "<<endl;
    cin>>n;

    int sum = n*(n+1)/2;
    int root = sqrt(sum);

    if(root * root == sum){
        cout<<root;
    } else{
        cout<<-1;
    }

    return 0;

}