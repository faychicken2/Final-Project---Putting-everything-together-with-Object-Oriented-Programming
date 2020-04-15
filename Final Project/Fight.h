#pragma once
#pragma once
#include <iostream>
#include <string>
#include <time.h>
#include <stdio.h> 
#include <stdlib.h> 
#include <ctime>


using namespace std;
//prototype functions
int Attack();

//---------------------


int RNG(/*Add the high number*/ int High, /*Add the low number*/ int low)
{
	srand(static_cast<unsigned int>(time(0))); /*generates a random number*/

	int NumberGenerated = rand() % High + low; // seed number between low and high

	return NumberGenerated;
}

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
	else
	{
		return 3;
		//cout << "\nAn asteroid strikes the ground and kills everything on the planet";
	}

	return 0;
}



