#include<iostream>
using namespace std;

class SRS
{
	int id,age;
	string name,course,city,email,collage;
	
	public :
	
	void input()
	{
		cout<<"Enter id : ";
		cin>>id;
		cout<<"Enter Name : ";
		cin>>name;
		cout<<"Enter Age : ";
		cin>>age;
		cout<<"Enter Course : ";
		cin>>course;
		cout<<"Enter City : ";
		cin>>city;
		cout<<"Enter Email : ";
		cin>>email;
		cout<<"Enter Collage : ";
		cin>>collage;
		
		cout<<endl;
	}
	
	void output()
	{
		cout<<"Id : "<<id<<endl;
		cout<<"Name : "<<name<<endl;
		cout<<"Age : "<<age<<endl;
		cout<<"Course : "<<course<<endl;
		cout<<"City : "<<city<<endl;
		cout<<"Email : "<<email<<endl;
		cout<<"Collage : "<<collage<<endl<<endl;
	}	
};

main()
{
	SRS s[5];
	int i;
	
	for(i=0; i<5; i++)
	{
		cout<<"Enter details of "<<i+1<<" Student :\n";
		s[i].input();
	}
	
	for(i=0; i<5; i++)
	{
		cout<<"Details of Student "<<i+1<<" :\n";
		s[i].output();
	}
	
}