#include<iostream>
using namespace std;

class A
{
	protected :
		int id;
		string name,role;
	
	public :	
		void setter1()
		{
			cout<<"Enter Id.: ";
			cin>>id;
			cin.ignore();
			cout<<"Enter name : ";
			getline(cin,name);
			cout<<"Enter Role : ";
			getline(cin,role);
			
			cout<<endl;
		}
};

class B : public A
{
	protected :
		int salary,exp;
	public :
		void setter2()
		{
			setter1();
			cout<<"Enter Salary : ";
			cin>>salary;
			cout<<"Enter Experience : ";
			cin>>exp;
		}
};

class C : public B
{
	protected :
		string comp_name,address;
	public :
		void setter3()
		{
			setter2();
			cin.ignore();
			cout<<"Enter Company Name : ";
			getline(cin,comp_name);
			cout<<"Enter Address : ";
			getline(cin,address);
		}
		void getter1()
		{
			cout<<"Name : "<<name<<endl;
			cout<<"Role : "<<role<<endl;
			cout<<"Salary : "<<salary<<endl;
		}
};

class D : public C
{
	protected :
		int contact;
		string email;
	
	public :
		void setter4()
		{
			setter3();
			cout<<"Enter email : ";
			getline(cin,email);
			cout<<"Enter Contact : ";
			cin>>contact;
			cin.ignore();
		}
		void getter()
		{
			cout<<"Id : "<<id<<endl;
			getter1();
			cout<<"Experience : "<<exp<<endl;
			cout<<"Company Name : "<<comp_name<<endl;
			cout<<"Address : "<<address<<endl;
			cout<<"Email : "<<email<<endl;
			cout<<"Conatct : "<<contact<<endl;
		}
		
};

int main()
{
	D d1;
	
	d1.setter4();
	d1.getter();
}