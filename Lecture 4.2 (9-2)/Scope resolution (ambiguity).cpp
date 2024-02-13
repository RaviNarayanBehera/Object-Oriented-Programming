#include<iostream>
using namespace std;

class A
{
	protected :
		int a = 1;
};

class B
{
	protected :
		int a = 2;
};

class C : public A,public B
{
	public :
		void get()
		{
			cout<<"Value of a is : "<<B::a;
		}
};

int main()
{
	C c1;
	c1.get();
	
	return 0;
}