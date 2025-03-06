#include<iostream>
using namespace std;
int main(){
   string str = "ullu";
   int n = str.length();

   int i=0;
   int j = str.length() - 1;
   while(i<j){
        if(str[i] != str[j]){
         cout<<"Not a palindrome"<<endl;
         exit (0);   
        }
        i++;
        j--;
   }
   cout<<"It is palidrome"<<endl;
   return 0;
}