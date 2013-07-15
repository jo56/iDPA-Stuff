#include <iostream>
#include <string>

using namespace std;

int add(int a, int b, int c, int d)
{
    return a + b + c + d;
}

void println(string val)
{
    cout << val << endl;
}

void main()
{
    
    int x = add(9, 5, 15, 16);
    cout << x << endl;
	println("Hi");
	system("pause");
}