//prg to find if a number is perfect or not

#include<iostream>
using namespace std;

int main()
{
	int n, i, sum=0;
	cout<<"Enter n"<<endl;
	cin>>n;
	
	for(i=1; i<=n; i++)
	{
		if(n%i==0)
		{
			sum = sum + i;
		}
	}
	if(2*n==sum)
	{
		cout<<"perfect number"<<endl;
	}
}
