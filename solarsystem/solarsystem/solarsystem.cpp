#include "pch.h"
#include "stellar_object.h"
#include "physics.h"
#include "graphics.h"
#include <iostream>
#include <cassert>

using namespace std; 

int Stellar::counter = 0; 

int main()
{
	//Initiate earth(0,0) and sun(5,5) 
	Stellar earth;
	Stellar sun("Sun", 1.989 * pow(10, 30), 0, 1.391 * pow(10, 6), 0, 5, 5); 

	cout << earth.get_name(); 

	getchar(); 
	return 0; 
}