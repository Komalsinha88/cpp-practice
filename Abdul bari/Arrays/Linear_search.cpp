#include<iostream>
using namespace std;

int main()
{
	int A[10], i, key, n=10;
	cout<<"Enter numbers "<<endl;
	
	for(i=0; i<n; i++)
	{
		cin>>A[i];
	}
	cout<<"Enter key ";
	cin>>key;
	
	for(i=0; i<n; i++)
	{
		if(key==A[i])
		{
			cout<<"Found at "<<i;
			return 0;
		}
	}
	cout<<"Not found ";
	return 0;
}
