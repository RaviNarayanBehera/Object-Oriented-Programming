#include<iostream>
using namespace std;

class Railway
{
	int time;
	string name,source,destination;
	
	public :
		int no;
		void input()
		{
			cout<<endl<<"Enter Train number : ";
			cin>>no;
			cin.ignore();
			cout<<"Enter Train name : ";
			getline(cin,name);
			cout<<"Enter Source(Starting Point) : ";
			getline(cin,source);
			cout<<"Enter Destination(Final Point) : ";
			getline(cin,destination);
			cout<<"Enter Time : ";
			cin>>time;
			cin.ignore();
		
		}
		void output()
		{
			cout<<"Train number : "<<no<<endl;
			cout<<"Train name : "<<name<<endl;
			cout<<"Source : "<<source<<endl;
			cout<<"Destination : "<<destination<<endl;
			cout<<"Train time : "<<time<<endl;
			
			cout<<endl;
		}
};

int main()
{
	int n,no;
	
	cout<<"Enter N no.: ";
	cin>>n;
	
	Railway r[n];
	int i,j;
	
	for(i=0; i<n; i++)
	{
		r[i].input();
	}
	
	cout<<endl<<"Enter the train number you want to see : ";
	cin>>j;
	
	for(i=0; i<n; i++)
	{
		if(j==r[i].no)
		{	
			cout<<endl;
			r[i].output();
		}
	}
	
}
