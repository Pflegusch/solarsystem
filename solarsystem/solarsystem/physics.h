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

void linear_system_solver(); 

//Circle equation for stellar object to circle center object
void circle_equation(Stellar* center, Stellar* object) {
	double center_point[2] = { center->get_x(), center->get_y() }; 

	//Solve (x - centerx)^2 + (y - centery)^2 = object->get_astrounits() * AU; 
}