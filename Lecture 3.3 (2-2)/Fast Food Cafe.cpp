#include<iostream>
using namespace std;

class Cafe
{
	int id,rating,staff_quantity,est_year;
	string name,type,location;
	
	public :
		
		Cafe()
		{
			cout<<"Welcome To Fast Food Cafe"<<endl;
		
			cout<<"Enter id : ";
			cin>>id;
			cin.ignore();
			cout<<"Enter Name : ";
			getline(cin,name);
			cout<<"Enter type (rooftop or normal) : ";
			getline(cin,type);
			cout<<"Enter rating : ";
			cin>>rating;
			cin.ignore();
			cout<<"Enter Location : ";
			getline(cin,location);
			cout<<"Enter Staff quantity : ";
			cin>>staff_quantity;
			cin.ignore();
			cout<<"Enter Establish Year : ";
			cin>>est_year;
			cin.ignore();
			
			cout<<endl;
			
		
			cout<<"Cafe ID : "<<id<<endl;
			cout<<"Cafe's Name : "<<name<<endl;
			cout<<"Cafe's Type : "<<type<<endl;
			cout<<"Cafe's Est.Year : "<<est_year<<endl;
			cout<<"Cafe's Staff Quantity : "<<staff_quantity<<endl;
			cout<<"Cafe's Rating : "<<rating<<endl;
			cout<<"Cafe's Location : "<<location<<endl;
			
		}
		
};

main()
{
	Cafe c1;
}
