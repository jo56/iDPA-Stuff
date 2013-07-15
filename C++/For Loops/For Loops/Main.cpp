#include <iostream>
#include <string>
using namespace std;

void main()
{
    for(int i = 0; i<= 100; i++)
    {
		if(i % 3 == 0)
        {
			cout << "fizz ";
        }
		if(i % 5 == 0)
        {
			cout << "buzz ";
        }
		if(i % 15 == 0)
        {
			cout << "fizzbuzz ";
        }
        cout << i << endl;
    }
	system("pause");
}