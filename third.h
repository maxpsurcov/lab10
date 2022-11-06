#pragma once
#include "ten.h"
#include <iostream>
#include<cmath>
using namespace std;

class third : public ten {
public:

	third() {	//	Конструктор за замовченням
		cout << "\n A triangle on three sides" << endl;
		AB = 0;
		BC = 0;
		AC = 0;
	}

	void Read() {
		cout << "Enter the sides of the triangle" << endl;
		cout << "AB= ";
		cin >> AB;
		cout << "BC= ";
		cin >> BC;
		cout << "AC= ";
		cin >> AC;
		cout << endl;
	}

	void Calculate() {
		if (AB < BC + AC && BC < AC + AB && AC < AB + BC) {
			if (AB == BC)
				cout << "isosceles triangle AB=BC\t" << AB << " = " << BC << endl;
            	else if (AB == AC)
				cout << "isosceles triangle AB=AC\t" << AB << " = " << AC << endl;
			else if (AC == BC)
				cout << "isosceles triangle AC=BC\t" << AC << " = " << BC << endl;
			else if (AB == BC && BC == AC)
				cout << "An equilateral triangle - parties AB, BC and AC equal to each other" << endl;
			else
				cout << "The triangle is arbitrary" << endl;

			cout << "Middle line KL" << "\n KL = " << AB / 2 << "centimeters" << endl;
			cout << "Median AM" << "\n AM = " << sqrt(pow(AB, 2) / 2 + pow(AC, 2) / 2 - pow(BC, 2) / 4) << "centimeters" << endl;
		}
		
        else
			cout << "A triangle does not exist" << endl;
	}
};
