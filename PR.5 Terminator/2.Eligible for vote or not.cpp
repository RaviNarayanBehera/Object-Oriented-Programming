#include<iostream>
using namespace std;

class Age_Validation
{
	protected :
		int age;
		
	public :
		
		void Age()
		{
			cout<<"Enter age : ";
			cin>>age;
			
			try
			{
				if(age<18)
				{
					throw 0;
				}
				else
				{
					cout<<"You are eligible to vote.";
				}
			}
			catch(...)
			{
				cout<<"You are not eligible to vote....!";
			}
		}
};
main()
{
	Age_Validation v1;
	
	v1.Age();
}