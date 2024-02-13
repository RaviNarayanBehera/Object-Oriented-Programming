#include<iostream>
using namespace std;

class Cricket
{
	protected :
		int over;
};

class T20Match : public Cricket
{
	public :
		
		
		
	void getTotalOvers(int over)
	{
		this->over = over;
		cout<<over<<" Overs";
	}
};

class ODIMatch : public Cricket
{
	public :
	
	void getTotalOvers(int over)
	{
		this->over = over;
		cout<<endl<<over<<" Overs";
	}
};

int main()
{
	T20Match t1;
	t1.getTotalOvers(20);
	
	ODIMatch m1;
	m1.getTotalOvers(50);

	return 0;
}