#include<iostream>
using namespace std;
class Time_convert
{
	public :
	int time;
	void input()
	{
		cout<<"Enter time in second : ";
		cin>>time;
	}
	
	void change()
	{
		int hh,mm,ss;
	
		hh = time / 3600;
		time = time % 3600;
		mm = time / 60;
		ss = time % 60;
	
		cout<<hh<<":"<<mm<<":"<<ss; 
	}
	
};;
main()
{
	Time_convert t1;
	
		t1.input();
		t1.change();
	
}