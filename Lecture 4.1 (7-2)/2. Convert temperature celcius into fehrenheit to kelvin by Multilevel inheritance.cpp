#include<iostream>
using namespace std;

class P
{
	protected :
		float celcius;
};

class Q : public P
{
	protected :
		float fehrenheit;
		
	public :
		
	void toFehrenheit()
	{
		cout<<"Enter Temperature in Celcius : ";
		cin>>celcius;
		
		fehrenheit = (celcius*9/5)+32;
		
		cout<<"Temperature in Fehrenheit is : "<<fehrenheit<<endl;
	}
};

class R : public Q
{
	protected :
		float kelvin;
		
	public :
		
	void toKelvin()
	{
		kelvin = (fehrenheit - 32) * 5/9 + 273.15;
		
		cout<<"Temperature in kelvin is : "<<kelvin<<endl;
	} 
};

main()
{
	R r1;
	r1.toFehrenheit();
	r1.toKelvin();
}