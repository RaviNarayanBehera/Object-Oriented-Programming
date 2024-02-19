#include<iostream>
using namespace std;
static string comp_name = "MY COMPANY";
class Admin
{
	protected :
		int manager_salary = 15000,emp_salary = 10000,total_annual_revenue = 50000,total_staff = 50;
	
	public :
		void myAccess()
		{
			cout<<"Admin :"<<endl;
			cout<<"Company Name : "<<comp_name<<endl;
			cout<<"Total staff : "<<total_staff<<endl;
			cout<<"Manager Salary :"<<manager_salary<<endl;
			cout<<"Employee Salary :"<<emp_salary<<endl<<endl;
		}
};

class Manager : public Admin
{
	public :
		void myAccess()
		{
			cout<<"Manager :"<<endl;
			cout<<"Company Name : "<<comp_name<<endl;
			cout<<"Total staff : "<<total_staff<<endl;
			cout<<"Manager Salary :"<<manager_salary<<endl<<endl;
		}
};

class Employee : public Manager
{		
	public :
		void myAccess()
		{
			cout<<"Employee :"<<endl;
			cout<<"Company Name : "<<comp_name<<endl;
			cout<<"Total staff : "<<total_staff<<endl;
			cout<<"Employee Salary :"<<emp_salary<<endl;
		}
};

main()
{
	Admin a1;
	a1.myAccess();
	
	Manager m1;
	m1.myAccess();
	
	Employee e1;
	e1.myAccess();
	
};