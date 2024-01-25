#include <iostream>
using namespace std;

int main() 
{
    int feet;
    int inches;

    cout << "Enter feet : ";
    cin >> feet;

    cout << "Enter inches : ";
    cin >> inches;

	feet += inches/12 ;
    inches %= 12;

    cout <<"\nFeet - "<<feet<<", inches - "<<inches;

}