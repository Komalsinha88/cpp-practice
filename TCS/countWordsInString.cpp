#include<iostream>
using namespace std;

int main(){
    string str = "I am a girl";
    int n = str.length();

    int count = 0;
    for(int i=0; i<n; i++){
        if(str[i] == ' '){
            count++;
        }
    }
    cout<<count + 1<<endl;
    return 0;
}