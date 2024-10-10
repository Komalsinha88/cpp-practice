// prg to find if a number is amstrong or not

#include<iostream>
using namespace std;

int main()
{
	int n, r, sum = 0, m;
	
	cout<<"Enter the number"<<endl;
	cin>>n;
	
	m=n;
	
	while(n>0)
	{
		r=n%10;
		n=n/10;
		sum=sum+r*r*r;
	}
	if(sum == m)
	{
		cout<<"It is an amstrong number"<<endl;
	}
	else
	{
		cout<<"It is not a amstrong number"<<endl;
	}
	return 0;
}
