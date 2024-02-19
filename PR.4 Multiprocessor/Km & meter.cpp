#include<iostream>
using namespace std;

class Op
{
	int a,b;
	
	public :
		void set()
		{
			cout<<"Enter KM : ";
			cin>>a;
			cout<<"Enter Meter : ";
			cin>>b;
			cout<<endl;
		}
		
		void get()
		{
			cout<<"Km = "<<a<<endl<<"Meter = "<<b;
		}
		
		Op operator+(Op &o2)
		{
			int x,y;
			Op temp;
			
			x = this->a  + o2.a + (this->b/1000) + (o2.b/1000);
			y = this->b%1000 + o2.b%1000;
			
			temp.a = x;
			temp.b = y;
			
			return temp;
		}
};

int main()
{
	Op o1,o2,o3;
	
	o1.set();
	o2.set();
	
	o3 = o1 + o2;
	
	o3.get();
	
	
}

