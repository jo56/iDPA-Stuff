#include<iostream>
#include<string>
using namespace std;
void main ()
{
    cout << "Enter a number: ";
    int a;
    cin >> a;
	while(a!=1)
    {
		if(a%2==0)
		{
			a = a/2;
		}
		else
		{
			a = 3*a+1;
		}
		cout << a << endl;
    }
	system("pause");
}