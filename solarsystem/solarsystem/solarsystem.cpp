#include "pch.h"
#include "stellar_object.h"
#include <iostream>

using namespace std; 

int Stellar::counter; 
int main()
{
	Stellar earth;

	cout << earth.get_name() << endl;

	getchar(); 
	return 0; 
}