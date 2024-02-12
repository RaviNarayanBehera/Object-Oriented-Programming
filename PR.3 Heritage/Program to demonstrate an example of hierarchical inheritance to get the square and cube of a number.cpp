#include<iostream>
using namespace std;

class Main
{
	protected :
		int a;
		
	public :
		void input()
		{
			cout<<"Enter no.: ";
			cin>>a;
		}
};
class Square : public Main
{
	public :
		void get()
		{
			input();
			cout<<"Square : "<<a*a;	
		}
};
class Cube : public Main
{
	public :
	void get()
	{
		cout<<endl<<endl;
		input();
		cout<<"Cube : "<<a*a*a;	
	}	
};

main()
{
	Square s1;
	Cube c1;
	
	s1.get();
	c1.get();
}
