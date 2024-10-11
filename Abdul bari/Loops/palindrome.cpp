//prg to find if a number is palindrome or  not

#include<iostream>
using namespace std;

int main()
{
	int n, r, rev = 0;
	int m;
	
	cout<<"Enter the number "<<endl;
	cin>>n;
	m=n;
	
	while(n>0)
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
    if(rev==m)
        cout<<"palindrome";
    else
        cout<<"not a palindrome";
}
