#include<iostream>
using namespace std;

class Diamond
{
	int id,staff_quantity,revenue,import_diamond,export_diamond;
	string name,ceo_name;
	
	public :
		
		Diamond(int id,int staff_quantity,int revenue,int import_diamond,int export_diamond,string name,string ceo_name)
		{
		
			this->id = id;
			this->name = name;
			this->ceo_name = ceo_name;
			this->staff_quantity = staff_quantity;
			this->revenue = revenue;
			this->import_diamond = import_diamond;
			this->export_diamond = export_diamond;
		
			cout<<"Company Id.: "<<id<<endl;
			cout<<"Company's Name : "<<name<<endl;
			cout<<"Company's CEO Name : "<<ceo_name<<endl;
			cout<<"Company's Staff Quantity : "<<staff_quantity<<endl;
			cout<<"Company Revenue (per year) : "<<revenue<<endl;
			cout<<"Company's Import raw diamonds (per year) : "<<import_diamond<<endl;
			cout<<"Company's Export raw diamonds (per year) : "<<export_diamond<<endl<<endl;
			
		}
};

main()
{
	
	int n,id,staff_quantity,revenue,import_diamond,export_diamond;
	string name,ceo_name;
	
	cout<<"Enter No. of Diamond Companies : ";
	cin>>n;
	
	

	for(int i=0; i<n; i++)
	{

		cout<<endl<<"Enter Id : ";
		cin>>id;
		cin.ignore();
		cout<<"Enter Name : ";
		getline(cin,name);
		cout<<"Enter Ceo Name : ";
		getline(cin,ceo_name);
		cout<<"Enter Staff quantity : ";
		cin>>staff_quantity;
		cin.ignore();
		cout<<"Enter Revenue (per year) : ";
		cin>>revenue;
		cin.ignore();
		cout<<"Enter No. of Import raw Diamond (per year) : ";
		cin>>import_diamond;
		cin.ignore();
		cout<<"Enter No. of Export raw Diamond (per year) : ";
		cin>>export_diamond;
		cin.ignore();
		
		cout<<endl<<endl;
	
		Diamond(id,staff_quantity,revenue,import_diamond,export_diamond,name,ceo_name);
	}
	
}