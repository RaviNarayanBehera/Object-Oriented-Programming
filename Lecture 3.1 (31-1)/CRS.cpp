#include<iostream>
using namespace std;

class CRS
{
	int id,age,simcard_validity;
	long long mobile_number;
	string name,city,telecom_brand_name;
	
	public :
		
		void input()
		{
			cout<<"Enter  Customer id : ";
			cin>>id;
			cout<<"Enter Customer Name : ";
			cin>>name;
			cout<<"Enter Customer Age : ";
			cin>>age;
			cout<<"Enter Customer City : ";
			cin>>city;
			cout<<"Enter Customer Mobile Number : ";
			cin>>mobile_number;
			cout<<"Enter Customer Simcard Validty : ";
			cin>>simcard_validity;
			cout<<"Enter Customer Telecom Brand Name : ";
			cin>>telecom_brand_name;
			
			cout<<endl;
		}
		
		void output()
		{
			cout<<"Customer Id : "<<id<<endl;
			cout<<"Customer Name : "<<name<<endl;
			cout<<"Customer Age : "<<age<<endl;
			cout<<"Customer City : "<<city<<endl;
			cout<<"Customer Mobile No.: "<<mobile_number<<endl;
			cout<<"Customer Simcard Validity : "<<simcard_validity<<"year "<<endl;
			cout<<"Customer Telecom Brand Name : "<<telecom_brand_name<<endl<<endl;
		}
	
};

main()
{
	CRS c[5];
	
	int i;
	
	for(i=0; i<5; i++)
	{
		cout<<"Enter details of "<<i+1<<" Customer :"<<endl;
		c[i].input();
	}
	
	for(i=0; i<5; i++)
	{
		cout<<"Details of Customer "<<i+1<<" :"<<endl;
		c[i].output();
		cout<<endl;
	}
}
