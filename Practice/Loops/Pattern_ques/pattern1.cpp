#include<iostream>
using namespace std;

int main()
{
	int i, j;
	int num=1;
	
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=i; j++)
		{
			cout<<num<<" ";
			num++;
		}
		cout<<endl;
	}
	return 0;
}

/*
OUTPUT
1
2  3
4  5  6
7  8  9  10
11 12 13 14 15
*/


