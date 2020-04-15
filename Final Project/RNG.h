#pragma once
#include <time.h>
#include <stdio.h> 
#include <stdlib.h> 
#include <ctime>


int RNG(/*Add the high number*/ int High, /*Add the low number*/ int low)
{
	srand(static_cast<unsigned int>(time(NULL))); /*generates a random number seed*/

	int NumberGenerated = rand() % High + low; // seed number between low and high

	return NumberGenerated;
}