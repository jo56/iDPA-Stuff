#include<iostream>
#include<string>
using namespace std; 

	void dead()
	{cout << "You are dead" << endl;}
	void main()
{
	cout << "You wake up in a space ship. The place is dark, and the only sounds you can hear is the disctinct hum of the engine. Looking forward, you can see light that is illuminating a door. After feeling around, you deduce that this is the only exit in the room. Upon inspecting it, you see that it has a lock that requires a hand print to open." << endl;
    cout << "1. Press your hand against the door " << endl;
    cout << "2. Curl up and cry in a corner" << endl;
	cout << "3. Do nothing" << endl;
    
    int selection;
    cin >> selection;
    
    if(selection == 1)
    {
        cout << "You try it. Surprisingly, your hand works. Going  throught the next room, you see that it is much bigger and is also dark. As such, you decide to either explore from the right side from the left, or walk forward. Which side do you choose to explore from? " << endl;
		cout << "1. Start exploring the right" << endl;
		cout << "2. Start exploring to the left" << endl;
		cout << "3. Start walking forwards" << endl;
		
		int selection;
		cin >> selection;
		
		if (selection == 1)
		{
			cout << "Going to the right, you stumble upon a computer that is off." << endl;
			cout << "1. Turn it on" << endl;
			cout << "2. Keep walking" <<endl;
		}
		
		if(selection == 2)
		{
			cout << "You find medical supplies and food rations." << endl; 
			cout << "1. Take the supplies and ratioins" << endl;
			cout << "2. Leave them there and keep walking" << endl;
		}
		
		if(selection == 3)
		{
			cout << "You reach a massive door. You can use your hand to open it. However, you're wondering whether you should go back and check for anything else." << endl; 
			cout << "1. Go through the door." << endl;
			cout << "2. Go back to the entrance and see what you find." << endl;
		}
	}
    if( selection == 2)
    {
        cout << "You cry. You now emerge five minutes later feeling far less manly and ready to try again." << endl;
    }
    if (selection == 3)
    {
        cout << "You do nothing. However, you realize that you are hungry and succumb to starvation" << endl;
		dead();
    }
	system("pause");
	} 