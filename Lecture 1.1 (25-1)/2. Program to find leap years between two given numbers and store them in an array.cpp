#include<iostream>
using namespace std;

main()
{
	int m,n;
	
	cout << "Enter the first year : ";
	cin >> m;
	
	cout << "Enter the last year : ";
	cin >> n;
	
	int total,year,i,x=0;
	
	total = n - m;
	year = (total/4)+1;
	
	int a[year];
	
	for(i=m; i<=n; i++)
	{
		if(i%4==0)
		{
			a[x] = i;
			x++;
		}
	}
	
	cout << "\nThe leap year between two no.'s are : ";
	
	for(i=0; i<x; i++)
	{
		cout << a[i]<< ",";
	}

}