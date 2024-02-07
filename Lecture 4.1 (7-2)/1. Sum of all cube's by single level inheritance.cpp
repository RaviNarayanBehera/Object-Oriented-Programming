#include<iostream>
using namespace std;

class X
{
	protected :
		int a,b,c;
};

class Y : public X
{
	protected :
		int sum;
		
	public :	
		void setData()
		{
			cout<<"Enter value a : ";
			cin>>a;
			cout<<"Enter value b : ";
			cin>>b;
			cout<<"Enter value c : ";
			cin>>c;
		}
		
		void getData()
		{
			a = a*a*a;
			b = b*b*b;
			c = c*c*c;
			
			sum = a+b+c;
			
			cout<<endl<<"Sum of all cube number is : "<<sum;
		}
};

main()
{
	Y y1;
	y1.setData();
	y1.getData();
}