#include<iostream>
using namespace std;

main()
{
	int age;
	
	cout<<"Enter your age : ";
	cin>>age;
	
	try
	{
		if(age<18)
		{
			throw age;
		}
		else
		{
			cout<<"You are eligible to Vote.";
		}
	}
	catch(...)
	{
		cout<<"You are less than 18."<<endl<<"You can't Vote....!";
	}
}