#pragma once
#pragma once
#include <iostream>
#include <string>
#include "RNG.h"


using namespace std;
//prototype functions
int Attack();

//---------------------




int Attack()
{

 	int NumberGenerated = RNG(3, 1);

	if (NumberGenerated == 1)
	{
		return 1;
		//cout << "\nYou punch the beast and it run squealing away.";
	}
	else if (NumberGenerated == 2)
	{
		return 2;
		//cout << "\nThe beast spits acid on you and you die a slow painful death.";
	}
	else if (NumberGenerated == 3)
	{
		return 3;
		//cout << "\nAn asteroid strikes the ground and kills everything on the planet";
	}
	else
	{
		return 3;
	}

	return 0;
}



