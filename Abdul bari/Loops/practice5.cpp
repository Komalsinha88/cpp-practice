//prg to find if a number is divisible by 1 and itself i.e., prime number

#include<iostream>
using namespace std;

int main()
{
	int n, i, count=0;
	cout<<"Enter n"<<endl;
	cin>>n;
	
	for(i=1; i<=n; i++)
	{
		if(n%1==0)
		{
			count++;
		}
	}
	if (count==2)
	{
		cout<<"It is a prime number"<<endl;
	}
	else
	{
		cout<<"It is not a prime number"<<endl;
	}
	return 0;
}

