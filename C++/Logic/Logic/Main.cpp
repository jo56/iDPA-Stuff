#include <iostream>
#include <string>
using namespace std;

void main ()
{
	int level = 7;
    if(level > 4 && level < 6)
		// greater than four and less than six
    {
        cout << "level 5: woo" << endl;
    }
    else if (level ==4 || level ==6)
		// double bar || = or
    {
        cout << "level 4 or 6" << endl;
    }
    else if (! (level == 4))
    {
        cout << "not level 4" << endl;
    }
	bool a = false;
	bool b = true;

	cout << "a and b:" << (a && b) << endl;
	cout << "a or b: " << (a || b) << endl;
	cout << "not a:  " << !a << endl;
	system("pause");
}

/*
Truth Tables

AND
true and true -> true
true and false -> false
false and true -> false
false and false -> false

OR
true or true -> true
true or false -> true
false or false -> false
false or true --> true

NOT
NOT true -> false
NOT false -> true

*/