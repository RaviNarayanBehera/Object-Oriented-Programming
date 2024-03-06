#include<iostream>
using namespace std;

class Divide
{
	protected :
		float a,b;
	public :
		
		void division()
		{
			cout<<"Enter a : ";
			cin>>a;
			cout<<"Enter b : ";
			cin>>b;
			
			
			try
			{
				if(b==0)
				{
					throw runtime_error("Denominator can't be zero");
				}
				else
				{
					cout<<"A divide by B is "<<a/b;
				}
			}
			catch(runtime_error error)
			{
				cout<<error.what();
			}
		}
};

main()
{
	Divide d1;
	d1.division();
}