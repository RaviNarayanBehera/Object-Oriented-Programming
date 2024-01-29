#include<iostream>
using namespace std;

class CRS
{
	public :
		int id,year;
		string name,color,model;
		
	void gets()
	{
		cout<<"Enter id : ";
		cin>>id;
		cout<<"Enter Company Name : ";
		cin>>name;
		cout<<"Enter Car Color : ";
		cin>>color;
		cout<<"Enter Car Model : ";
		cin>>model;
		cout<<"Enter Release Year : ";
		cin>>year;
		
		cout<<endl;
	}
	
	void outs()
	{
		cout<<"Id : "<<id<<endl;
		cout<<"Company Name : "<<name<<endl;
		cout<<"Car Color : "<<color<<endl;
		cout<<"Car Model : "<<model<<endl;
		cout<<"Release Year : "<<year<<endl;
		
		cout<<endl;
	}
	
};

main()
{
	CRS car[4];
	
	int i;
	
	for(i=0; i<4; i++)
	{
		car[i].gets();
	}
	
	for(i=0; i<4; i++)
	{
		car[i].outs();
	}
}