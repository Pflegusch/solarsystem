#pragma once
#include <time.h>
#include <string>
#include <cmath>
#include <iostream>
#include "stellar_object.h"

using namespace std; 

//Gravitational constant
#define G 6.674 * pow(10, -11)
#define AU 149597870700

//Calculate velocity of an object circling the center object, assume perfect orbit
double calc_velocity(Stellar* object, Stellar* center) {
	//Astronomical units in m
	double radius = object->get_astrounits() * AU;
	//Perfect orbit -> Centripetal force = Gravitational force
	float velocity = sqrt((G * center->get_mass() / radius));

	return velocity; 
}