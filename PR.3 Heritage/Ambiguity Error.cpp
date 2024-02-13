#include<iostream>
using namespace std;

class A
{
	protected :
		string name = "Ravi"; 
};

class B
{
	protected :
		string name = "Ravi";
};

class C : public A,public B
{
	public :
		void get()
		{
			cout<<"My name is : "<<A::name;
		}
};

main()
{
	C c1;
	c1.get();
}