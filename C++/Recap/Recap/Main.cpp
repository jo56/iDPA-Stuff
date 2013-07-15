#include <iostream>
#include <string>

using namespace std;

//this is a comment, it is not code. It is ignored by the program

/*
this is a multi-line comment
ends with star-slash */


//this is a function
//returnType name( type parameter1, type parameter2 )
//functions can also have no parameters, like main()
int average(int var1, int var2)
{
    return (var1 + var2)/2;
}




void main()  //entry point: where the program starts
{
    //variables
    //integers, whole numbers
    int a;
    int b;

    //bool. true false values
    bool bool1 = false;
    bool bool2 = true;
    bool bool3 = 1 < 32;

    //char, a letter
    char letter = 'a';
    char bigLetter = 'A';
    char numberLetter = '4';

    //double, decimal values
    double withDecimal = 4.0;
    double pi = 3.14159265359;

    //strings, collections of chars
    string words = "If you are reading this, you exist.";
    string wordsWithNewLine = " This is a newline character -> \n";

    //get first integer
    cout << "Enter num A: ";
    cin >> a;

    //get second integer
    cout << "Enter num B: ";
    cin >> b;

    //calculate the average
    int result = average(a, b);

    //print the result
    cout << "Average: " << result << endl;

    //if statement
    if(a > b)
    {
        cout << "A is bigger" << endl;
    }
    else if(a == b)
    {
        cout << "They are the same" << endl;
    }
    else
    {
        cout << "B is Bigger" << endl;
    }

    //switch case statement
    switch(a)
    {
    case 0:
        cout << "A is 0" << endl;
    case 1:
        cout << "A is 1" << endl;
    default:
        cout << "A is not 0 or 1" << endl;
    }

    system("pause");

    //while loop
    while(a < 40)
    {
        cout << a << " ";

        if( a % 5 == 0 )
        {
            cout << endl;
        }

        a = a + 1;
    }
    cout << endl;


    system("pause");
}