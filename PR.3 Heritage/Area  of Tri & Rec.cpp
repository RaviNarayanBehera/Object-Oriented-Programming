#include<iostream>
using namespace std;
class Shape
{
	protected :
		float width,height;
	public :
		Shape()
		{
			cout<<"Enter Width : ";
			cin>>width;
			cout<<"Enter Height : ";
			cin>>height;
		}	
};
class Triangle : public Shape
{
	public:
		void area()
		{
			cout<<"Area of Triangle : "<<(width*height)/2<<endl<<endl<<endl;
		}
};
class Rectangle : public Shape
{
	public:
		void area()
		{
			cout<<"Area of Rectangle : "<<width*height;
		}
};




main()
{	
	Triangle t1;
	t1.area();
	
	Rectangle r1;
	r1.area();	
}
