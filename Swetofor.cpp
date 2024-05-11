#include <iostream>
using namespace ::std;


class Swetofor
{
private:
	int switcher = 0;

public:
	void changeColor()
	{
		if (switcher == 3)
			switcher = 0;
		else
			switcher++;
	}

	void checkColor()
	{
		switch (switcher)
		{
		case(0):
			cout << "\nGREEN";
			break;
			case(1) or (3) :
				cout << "\nYELLOW";
				break;
			default:
				cout << "\nRED";
				break;
		}
	}

	void checkMoving()
	{
		if (switcher == 0)
			cout << "\nMove on.";
		else if (switcher == 2)
			cout << "\nStop.";
		else 
			cout << "\nWait.";
	}
};


