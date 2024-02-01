#include<iostream>
using namespace std;

class Hotel
{
	int id,rating,staff_quantity,room_quantity;
	static int year;
	static string name;
	string type,location;
	
	public :
	
	void input()
	{
		cout<<"Enter your id : ";
		cin>>id;
		cin.ignore();
		cout<<"Enter type (hotel or motel) : ";
		getline(cin,type);
		cout<<"Enter rating : ";
		cin>>rating;
		cin.ignore();
		cout<<"Enter Location : ";
		getline(cin,location);
		cout<<"Enter Staff quantity : ";
		cin>>staff_quantity;
		cin.ignore();
		cout<<"Enter Room quantity : ";
		cin>>room_quantity;
		cin.ignore();
		
		cout<<endl;
		
		
	}
	
	void output()
	{
		cout<<name<<endl;
		cout<<"*----------------*"<<endl;
		cout<<"Est.Year : "<<year<<endl;
		cout<<"Id : "<<id<<endl;
		cout<<"Type : "<<type<<endl;
		cout<<"Staff Quantity : "<<staff_quantity<<endl;
		cout<<"Room Quantity : "<<room_quantity<<endl;
		cout<<"Rating : "<<rating<<endl;
		cout<<"Location : "<<location<<endl;
		
	}
	
};

string Hotel::name = "X Y Z Hotel & Motel";
int Hotel::year = 2000;

main()
{
	Hotel h[3];
	
	for(int i=0; i<3; i++)
	{
		h[i].input();
	}
	
	for(int i=0; i<3; i++)
	{
		h[i].output();
		cout<<endl;
	}
	
}