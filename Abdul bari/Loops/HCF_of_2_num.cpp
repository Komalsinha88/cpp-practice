//prg for finding HCF of two numbers.

#include<iostream>
using namespace std;

int main()
{
	int m, n;
	cout<<"Enter two numbers "<<endl;
	cin>>m>>n;
	
	while(m!=n)
	{
		if (m>n)
		{
			m=m-n;
		}
		else if (n>m)
		{
			n=n-m;
		}
		cout<<" HCF is "<<m;
	}
}
