#include<iostream>
using namespace std;

class ERS
{
	public :
	int id,age,salary,exp;
	string name,role,city,comp_name;
	
	void entry()
	{
		cout<<"Enter id : ";
		cin>>id;
		cout<<"Enter Name : ";
		cin>>name;
		cout<<"Enter Age : ";
		cin>>age;
		cout<<"Enter Role : ";
		cin>>role;
		cout<<"Enter Salary : ";
		cin>>salary;
		cout<<"Enter City : ";
		cin>>city;
		cout<<"Enter Experience : ";
		cin>>exp;
		cout<<"Enter Company Name : ";
		cin>>comp_name;
		
		cout<<endl;
	}
		
	void exit()
	{
		cout<<"Id : "<<id<<endl;
		cout<<"Name : "<<name<<endl;
		cout<<"Age : "<<age<<endl;
		cout<<"Role : "<<role<<endl;
		cout<<"Salary  : "<<salary<<endl;
		cout<<"City : "<<city<<endl;
		cout<<"Experience : "<<exp<<endl;
		cout<<"Company Name : "<<comp_name<<endl;
	
		cout<<endl;
	}	
};

main()
{
	ERS emp[5];
	
	for(int i=0; i<5; i++)
	{
		cout<<"Details of "<<i+1<<" Employee :\n"<<endl;
		emp[i].entry();
	}
	
	for(int i=0; i<5; i++)
	{
		emp[i].exit();
	}
		
}