#include<iostream>
using namespace std;
main()
{
	int time,hh,mm,ss;
	
	cout<<"Enter time in seconds : ";
	cin>>time;
	
	hh = time / 3600;
	time = time % 3600;
	
	mm = time / 60;

	ss = time % 60;
	
	cout<<"Convert Time into HH:MM:SS"<<endl;
	cout<<"\t\t   "<<hh<<":"<<mm<<":"<<ss;
}