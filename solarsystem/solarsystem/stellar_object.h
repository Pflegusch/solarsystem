#pragma once
#include <iostream>
#include <vector>
#include <ctime>
#include <string>

using namespace std;

class Stellar {
	//Physical properties in m, kg, m/s; 
	const string name;
	double mass, astro_unit, diameter, velocity = 0;

	//Coordinates (x,y) in 2D plane 
	double x, y;

	//Counter for default constructor
	static int counter; 

	//Default constructor: Create Earth-like object
public:
	Stellar()
		: name("so_" + to_string(counter))
		, mass(5.97 * pow(10, 24))
		, astro_unit(1)
		, diameter(12742)
		, velocity(0)
		, x(0)
		, y(0)
	{
		counter++; 
	}

	//Constructor
	Stellar(string name_, double mass_, double astro_unit_, double diameter_,
		double velocity_ = 0, double x_ = 0, double y_ = 0)
		: name(name_)
		, mass(mass_)
		, astro_unit(astro_unit_)
		, diameter(diameter_)
		, velocity(velocity_)
		, x(x_)
		, y(y_)
	{
		counter++; 
	}

	//Getter
	string get_name() {
		return this->name;
	}

	double get_mass() {
		return this->mass;
	}

	double get_astrounits() {
		return this->astro_unit;
	}

	double get_diameter() {
		return this->diameter;
	}

	double get_velocity() {
		return this->velocity;
	}

	double get_x() {
		return this->x;
	}

	double get_y() {
		return this->y;
	}

	//Setter
	void set_mass(double mass_) {
		this->mass = mass_;
	}

	void set_astrounits(double astrounits_) {
		this->astro_unit = astrounits_;
	}

	void set_diameter(double diameter_) {
		this->diameter = diameter_;
	}

	void set_velocity(double velocity_) {
		this->velocity = velocity_;
	}

	void set_x(double x_) {
		this->x = x_;
	}

	void set_y(double y_) {
		this->y = y_;
	}

	//Calculate the distance of two stellar objects in the 2D plane
	double get_distance(Stellar* other) {
		double distance = sqrt(pow((other->x - this->x), 2) + pow((other->y - this->y), 2)); 
		return distance; 
	}
};
