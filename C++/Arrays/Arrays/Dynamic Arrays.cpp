#include <iostream>
#include <string>
using namespace std;

void main()
{

    //create an array in dynamic memory
    int* arr = new int[3];   //int* means that arr is not an integer, but an integer pointer
    
    //fill the array elements
    arr[0] = 252;
    arr[1] = 10;
    arr[2] = 10;
    cout << arr[0] << endl;  //print out the first element
   
	 cout << " The address of the array in dynamic memory: " << arr[0] << endl;
	 
	 for(;;)
    {
        arr = new int[1000];
		delete[] arr;

    }

	//delete the array to free space.
   
	system("pause");
}