//prg for factorial of a number

#include<iostream>
using namespace std;

int main()
{
	int i, n, fact=1;
	
	cout<<"Enter the number n"<<endl;
	cin>>n;
	
	for(i=1; i<=n; i++)
	{
		fact=fact*i;
	}
	cout<<"Factorial of natural number is "<<fact<<endl;
	return 0;
}
