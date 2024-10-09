//prg for the sum of first 9 natural number

#include<iostream>
using namespace std;

int main()
{
	int i, n, sum=0;
	
	cout<<"Enter n"<<endl;
	cin>>n;
	
	for(i=1; i<=n; i++)
	{
		sum=sum+i;
	}
	cout<<"sum of first 9 natural number is "<<sum;
	return 0;
}
