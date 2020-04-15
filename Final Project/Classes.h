#pragma once
#pragma once
#include <string>
#include <iostream>


using namespace std;


class User
{
public:
	void user(string& Username);
	std::string Username;

	/*! 
	\brief a class template to make a user
 */
};


class ShopKeeper
{
public:
	void Shop(string& Keeper, string& Store);
	string Keeper;
	string Store;
	int Items;

	/*! 
	\brief a class template to make a shop and shop keeper 
 */

};




