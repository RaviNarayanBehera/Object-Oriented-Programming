#include <iostream>
using namespace std;

main() 
{
    for(int i=0; i<5; i++) 
    {
        for(int j=0; j<=i; j++) 
	{
            int x = 0;
            for(int k=0; k<j; k++) 
	    {
                x = x + 5 - k;
            }
            if(j%2==0) 
	    {
                cout << x + i - j + 1 << " ";
            } 
	    else
	    {
                cout << x + 5 - i << " ";
            }
        }
        cout << endl;
    }
}
