#include<iostream>
using namespace std;

class Supermarket
{
	int quantity,price,discount;
	string name;
	
	public :
		int no;
		
		void product_input()
		{
			cout<<endl<<"Enter item no.: ";
			cin>>no;
			cin.ignore();
			cout<<"Enter item name : ";
			getline(cin,name);
			cout<<"Enter item quantity : ";
			cin>>quantity;
			cin.ignore();
			cout<<"Enter item price : ";
			cin>>price;
			cin.ignore();
			cout<<"Enter discount : ";
			cin>>discount;
			cin.ignore();
		
		}
		
		void product_output()
		{
			cout<<endl<<"Item Number : "<<no<<endl;
			cout<<"Item Name : "<<name<<endl;
			cout<<"Item Quantity : "<<quantity<<endl;
			cout<<"Item Price : "<<price<<endl;
		}
};

main()
{
	int n,x;
	
	cout<<"Enter N no.: ";
	cin>>n;
	
	Supermarket s[n];
	
	for(int i=0; i<n; i++)
	{
		s[i].product_input();
	}
	
	cout<<endl<<"Enter the item no : ";
	cin>>x;
	
	for(int i=0; i<n; i++)
	{
		if(x==s[i].no)
		{
			s[i].product_output();
		}
	}

}