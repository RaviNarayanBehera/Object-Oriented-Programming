#include<iostream>
using namespace std;
class Distance
{
	public :
		void input()
		{
			int f1,i1,f2,i2;
			
			cout<<"Enter feet : ";
			cin>>f1;
			cout<<"Enter Inch : ";
			cin>>i1;
			
			cout<<"Enter feet : ";
			cin>>f2;
			cout<<"Enter Inch : ";
			cin>>i2;
			
			int feet,inch;
			
			feet = f1 + f2 + (i1/12) + (i2/12);
			inch = i1%12 + i2%12;
			
			cout<<feet<<" Feet ,"<<inch<<" Inch  ";
		}
};
main()
{
	Distance d1;
	
	d1.input();		
			
}