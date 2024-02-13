#include<iostream>
using namespace std;

class RBI
{
	protected :
		float rate ;
	public :
		
	void set() 
	{
        cout<<"Enter rate of interest : ";
        cin>>rate;
    }	
};

class SBI : public RBI
{
	public :
	
	void getROI() 
	{
		set();
        cout<<"SBI Interest Rate: "<<rate<<"%"<<endl<<endl;
    }
};

class BOB : public RBI
{
	public :
		
	void getROI() 
	{
		set();
        cout<<"BOB Interest Rate: "<<rate<<"%"<<endl<<endl;
    }
};

class ICICI : public RBI
{
	public :
		
	void getROI() 
	{
		set();
        cout<<"ICICI Interest Rate: "<<rate<<"%"<<endl;
    }
};

main()
{
	SBI s1;
	s1.getROI();
	
	BOB b1;
	b1.getROI();
	
	ICICI i1;
	i1.getROI();
}