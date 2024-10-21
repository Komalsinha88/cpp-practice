#include<iostream>
#include<cstring>
using namespace std;

int main(){
    string str;
    cout<<"Enter a string ";
    //cin>>str; (for single word)

    getline(cin, str);
    cout<<str<<endl;
    return 0;
}