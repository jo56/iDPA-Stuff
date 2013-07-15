#include <iostream>
#include <string>
#include "NyanCat.h"
using namespace std;

void testNyanCat()
{
	while(true)
	{
   NyanCat* littleNyan = new NyanCat();
   littleNyan->hasLazers = true;
   (*littleNyan).hasLazers = true;
   cout << littleNyan->name << " is nyantastic" << endl;
   littleNyan->fly();
   littleNyan->nyan();
   delete littleNyan;
	}
}

void main()
{
	
	testNyanCat();
	
	system("pause");

}