#include <iostream>
#include <conio.h>

using namespace std;

void main()
{
	const size = 5;
	
	int num[size];
	char alpha[size] = { 'A', 'B' , 'C' , 'D' , 'E'}
	cout << "Enter " << size << " Numbers: ";
	for(int i=0; i< size; i++)
	{
		cout<<"Enter value of "<<alpha[i]<< ":"; 
		cin>>num[i];
	}
	
	int prod;
	
	for(int i=0; i< size; i++)
	{
		prod = prod * num[i]
	}
	
	cout << endl << "Product is: : << prod;
	getch();
}