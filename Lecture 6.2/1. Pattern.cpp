#include<iostream>
using namespace std;

main()
{
	int i,j,k;
	
	for(i=1; i<=5; i++)
	{
		cout<<i<<" ";
		k=i;
		for(j=5; j>6-i; j--)
		{
			k = (k-1)+j;
			cout<<k<<" ";
		}
		cout<<endl;
	}
}