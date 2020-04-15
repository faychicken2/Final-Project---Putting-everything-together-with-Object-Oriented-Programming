//Michael Hinsberger 
//4/14/2020
//This program is a interactive fiction game.
//The program call from diffrent functions to put together a story

#include "Fight.h"
#include "Classes.h"
#include "RNG.h"
#include "Loading.h"
#include <iostream>
#include <string>
#include <windows.h> 




using namespace std;

//prototype classes
class User;
class ShopKeeper;
//-----------

// prototype functions
int Attack();
void user(string& Username);
void Shop(string& Keeper, string& Store);
void KeepsNames(string& name);
void printProgress(double percentage);
int TickTacToe(string username);

//------------


//thi is thwew the game statrs
int main()
{
	string out = "\n\n\n\n------------------------------------------------------------------------------------------------------------------------\n\n";

	// vars--------------
	string userName;
	string Choice;
	string Choice2;
	string Choice3;
	string Choice4;
	string attack;
	string Store;
	string Keeper;
	//--------------------

	cout << "Loading game " << endl;

	//Used for the Progress bar progression 
	for (int i = 0; i < 10; i++)
	{
		Sleep(80);
		printProgress(i);
	}
	Sleep(2050);

	system("cls");



	cout << "\nWelcome to my StarWars text adventure!" << endl;
	cout << "What is your name traveler? ";
	cin >> userName;
	

	//gets users name
	 user(userName);




	//story
	cout << "\n\nYou wake up from having your star fighter shot down";
	cout << "\nYou feel a pain in your arm. \t";
	cout << "\nYou look down and your arm is broken!";
	cout << "\nDo you Cut off your arm or put it in a splint?";
	cout << "\nType cut to cut off your arm or splint to splint your arm. ";
	cin >> Choice;

	//checking what the user unputed and responding
	if (Choice == "cut" || Choice == "Cut")
	{
		cout << "\nYou cut your arm off and you bleed out and die alone in you crashed starship.\n";
		return 0;

	}
	else if (Choice == "Splint" || Choice == "splint")
	{
		cout << "\nYou use your cloths and scrap around you to make a splint.\n";

	}
	else
	{
		cout << "\nYou dies alone in a strange world from waiting to long.\n";
		return 0;

	}

	//more story
	cout << "\nYou walk through the desert and come across a wild beast!";
	cout << "\nDo you sneak past the beast or attack it?";
	cout << "\nType sneak to speak or attack to attack. ";
	cin >> Choice2;

	//checking what the user inputed and responding
	if (Choice2 == "sneak" || Choice == "Sneak")
	{
		cout << "\nYou sneak past the beast and advanture on." << endl;
	}
	else if (Choice2 == "attack" || Choice == "Attack")
	{
		//assigning attack to the function Attack()
		int attack = Attack();

		//if attack returns 1, 2, 3 it responds accordingly 
		if (attack == 1)
		{
			cout << "\nYou punch the beast and it run squealing away." << endl;
			cout << "\nYou walk away shooken but not defeated." << endl;
			
		}
		else if (attack == 2)
		{
			cout << "\nThe beast spits acid on you and you die a slow painful death.";
			cout << out;

			return 0;

		}
		else if (attack == 3)
		{
			cout << "\nAn asteroid strikes the ground and kills everything on the planet";
			cout << out;

			return 0;

		}

	}

	//story
	cout << "\nYou see a town in the distance but you see a large shimmering lake. " << endl;
	cout << "do you walk to the town or the lake? " << endl;
	cout << "enter (town or lake) ";
	cin >> Choice3;

	//checking what the user inputed and responding
	if (Choice3 == "town" || Choice3 == "Town" || Choice3 == "TOWN")
	{
		// calls shop function
		Shop(Keeper, Store);
		//story
		cout << "\nYou walk to the town and find a shop called " << Store << endl;
		cout << "You walk into the shop to see if " << Keeper << " has any Weapons." << endl;
		cout << "When you walked in the store and a man yelled " << "HEY YOU" << " and shots you with a stun blast." << endl;
		cout << "You're knocked unconscious " << endl;
		Sleep(5000);
		cout << "\n\n\nYou wake up in an old abandoned moisture farm." << endl;
		cout << "You see movement in the shadows" << endl;
		cout << "An old man with scars on his face comes out." << endl;
		cout << "He says " << "I was paid good money to find you" << endl;
		cout << "But i'll let you go if you can beat me in one of my favorite games." << endl;
		cout << "Do you want to try your luck?" << endl;
		cout << "enter (yes or no) ";
		cin >> Choice4;

		if (Choice4 == "yes" || Choice4 == "YES" || Choice4 == "Yes" || Choice4 == "y" || Choice4 == "Y")
		{
			TickTacToe(userName);
		}
		else
		{
			cout << "I'll just collect you bounty them!" << endl;

		}

	}
	else if (Choice3 == "lake" || Choice3 == "Lake" || Choice3 == "LAKE")
	{
		//story
		cout << "You walked to the lake and it turns out it was a mirage." << endl;
		cout << "You fall to your knees in defeat and succumbs to your fait." << endl;
		cout << out;
			return 0;
	}




	cout << out;
	return 0;
}

// a function that uses the User class
void user(string& Username)
{
	//new User class me
	User me;
	//sets Users var Username to the referance to Username
	me.Username = Username;

	std::cout << "\nHello " << Username << " enjoy the game" << endl;


}
// a function that generates a name and store name
void Shop(string& Keeper, string& Store)
{
	string Name;
	KeepsNames(Name);

	ShopKeeper Keep;
	//keepers name
	Keeper = Keep.Keeper = "lord " + Name;
	//keepers shop name
	Store = Keep.Store = Keep.Keeper + " WareHouse";

}

void KeepsNames(string& name)
{
	//calls RNG to generate a number
	int pick = RNG(4, 1);

	//names
	//string Smit;
	//string Slier;
	//string Hookie;
	//string chiewie;
	////name that is picked
	//string PickedName;

	//picking a name
	if (pick == 1)
	{
		name = "Smit";
	}
	else if (pick == 2)
	{
		name = "Slier";
	}
	else if (pick == 3)
	{
		name = "Hookie";
	}
	else if (pick == 4)
	{
		name = "chiewie";
	}

	//returns name picked
}

