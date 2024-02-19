#include<iostream>
using namespace std;

class A
{
	protected :
		int a;
	public :
		void set()
		{
			cout<<"Enter a : ";
			cin>>a;
		}
		
		void get()
		{
			cout<<"a is "<<a<<endl;
		}
		
		void operator++(int)
		{
			a++;
		}
	
};

main()
{
	A a1;
	
	a1.set();
	a1.get();
	
	a1++;
	
	a1.get();
}