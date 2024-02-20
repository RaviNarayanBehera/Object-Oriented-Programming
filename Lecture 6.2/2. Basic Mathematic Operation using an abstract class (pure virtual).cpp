#include<iostream>
using namespace std;

class Shape
{
	protected :
		float base,height,radius,length,width;
	public :
		virtual void calculate() = 0;
};

class Circle : public Shape
{
	protected :
		const float pi = 3.14;
	public :
		void calculate()
		{
			cout<<".......Area of Circle......."<<endl<<endl;
			cout<<"Enter radius : ";
			cin>>radius;
		}
		void AreaofCircle()
		{
			cout<<"Area of Circle is "<<radius*radius*pi;
		}
	
};

class Triangle : public Shape
{
	public :
		void calculate()
		{
			cout<<endl<<endl<<endl<<".......Area of Triangle......."<<endl<<endl;
			cout<<"Enter base : ";
			cin>>base;
			
			cout<<"Enter height : ";
			cin>>height;;
		}
		void AreaofTriangle()
		{
			cout<<"Area of Triangle is "<<(base*height)/2;
		}
};

class Rectangle : public Shape
{
	public :
		void calculate()
		{
			cout<<endl<<endl<<endl<<".......Area of Rectangle......."<<endl<<endl;
			cout<<"Enter lenght : ";
			cin>>length;
			
			cout<<"Enter width : ";
			cin>>width;
		}
		void AreaofRectangle()
		{
			cout<<"Area of Rectangle is "<<length*width;
		}
	
};

main()
{
	Circle c1;
	
	c1.calculate();
	c1.AreaofCircle();
	
	Triangle t1;
	
	t1.calculate();
	t1.AreaofTriangle();
	
	Rectangle r1;
	
	r1.calculate();
	r1.AreaofRectangle();
	
	
}