/*
 * Comparing_floats.cpp
 *
 *  Created on: 28 May 2019
 *      Author: Dave
 */

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	float value_1 = 1.1f;

	if(value_1 == 1.1)
	{
		cout << "Equals" << endl;
	}
	else
	{
		cout << "Not equal" << endl;
	}

	cout << setprecision(10) << value_1 << endl;

	// As can been see the reason the if statement above returns false is due to
	//rounding errors.



	return 0;
}


