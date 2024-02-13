#include<iostream>
using namespace std;

class Arithmetic
{
	protected :
		int a,b,c,d,e;
	public :
		void Calculte(int a,int b)
		{
			this->a = a;
			this->b = b;
			cout<<"Division : "<<this->a / this->b<<endl;
		}

		void Calculte(int a,int b,int c)
		{
			this->a = a;
			this->b = b;
			this->c = c;
			cout<<"Subtraction : "<<this->a - this->b - this->c<<endl;
		}
		
		void Calculte(int a,int b,int c,int d)
		{
			this->a = a;
			this->b = b;
			this->c = c;
			this->d = d;
			cout<<"Multiplication : "<<this->a * this->b * this->c * this->d<<endl;
		}
		
		void Calculte(int a,int b,int c,int d,int e)
		{
			this->a = a;
			this->b = b;
			this->c = c;
			this->d = d;
			this->e = e;
			cout<<"Addition : "<<this->a + this->b + this->c + this->d + this->e<<endl;
		}
	
};

int main()
{
	Arithmetic a1;
	
	a1.Calculte(100,20);
	a1.Calculte(100,25,25);
	a1.Calculte(2,3,4,5);
	a1.Calculte(10,20,30,40,50);	
	
	return 0;
}