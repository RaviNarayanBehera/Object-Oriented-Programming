#include<iostream>
using namespace std;

main()
{
	int x;
	
	cout<<"Enter size of array : ";
	cin>>x;
	
	int i,a[x];
	
	cout<<"Enter element of array : \n";
	for(i=0; i<x; i++)
	{
		cout<<"a["<<i<<"] = ";
		cin>>a[i];
	}
	int check=0;
	cout<<"Even Element of array are : ";
	for(i=0; i<x; i++)
	{
		if(a[i]%2==0)
		{
			cout<<" "<<a[i];
		}
	}

}