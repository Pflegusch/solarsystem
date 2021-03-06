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
	//Initiate earth(0,0,0) and sun(5,5,5) 
	Stellar earth;
	Stellar moon("Moon", 7.349 * pow(10, 22), 1, 3474.2, 0, 5, 5, 5);
	Stellar sun("Sun", 1.989 * pow(10, 30), 0, 1.391 * pow(10, 6), 0, 5, 5, 5); 

	cout << earth.get_distance_3d(&sun);
	cout << "Test" << endl; 

	getchar(); 
	return 0; 
}