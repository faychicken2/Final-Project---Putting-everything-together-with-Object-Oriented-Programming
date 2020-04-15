#pragma once
#include <iostream>
#include <windows.h> 

using namespace std;



#define PBSTR "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"
#define PBWIDTH 10 //60
//Loading bar
void printProgress(double percentage)
{
	int val = (int)(percentage * 11);
	int lpad = (int)(percentage * PBWIDTH);
	int rpad = PBWIDTH - lpad;
	printf("\r%3d%% [%.*s%*]", val, lpad, PBSTR, rpad, "");
	fflush(stdout);
}