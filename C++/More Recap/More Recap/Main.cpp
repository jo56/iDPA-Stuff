#include <iostream>
#include <string>
using namespace std;

void cat()
{cout << "Meow";}

void main ()
{
	 int a;
	 double b;
	 bool c;
	 char d;
	 string e;
	 
	 cout << "Enter a number" << endl;
	 cin >> a;

	if (a<20)
	{
		cout << "Your number is less than 20" << endl;
	}
    
	else if (a<30)
	{
		cout << "Your number is greater than 20, but less than 30" << endl;
	}

	else
	{
		cout << "Your number is greater tehan 30" << endl;
	} 

	for(b=4.5;b<1000; b++)
	{
		cat();
    }

	 system("pause");
}