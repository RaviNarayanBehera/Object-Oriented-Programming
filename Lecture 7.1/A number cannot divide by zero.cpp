#include<iostream>
using namespace std;

main()
{
	int a,b;
	
	cout<<"Enter a : ";
	cin>>a;
	cout<<"Enter b : ";
	cin>>b;
	
	try
	{
		if(b==0)
		{
			throw b;
		}
		else
		{
			cout<<"Division : "<<a/b;
		}
	}
	catch(int x)
	{
		cout<<"Value can't divide by "<<x;
	}
	
	
}