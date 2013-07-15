#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <iostream>
#include <string>

using namespace std;

void main()
{
	long secs = time(NULL);  //get number of seconds since Jan 1, 1970 UTC  
    srand (secs);            //seed the random number generator
   while(true)
	{
	/* initialize random seed: */
    
	cout<<rand();
	}
   system("pause");
	
}
