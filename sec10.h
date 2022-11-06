#pragma once
#include "ten.h"
#include <iostream>
#include <cmath>
using namespace std;

class secten : public ten {
public:
	secten() {	//	Конструктор за замовченням
		cout << "\n A triangle with three vertices" << endl;
		ax = 0;
		ay = 0;
		bx = 0;
		by = 0;
		cx = 0;
		cy = 0;
	}
	void Read() {
		cout << "Enter the coordinates of the points of the triangle" << endl;
		cout << "Ax= ";
		cin >> ax;
		cout << "Ay= ";
		cin >> ay;
		cout << "Bx= ";
		cin >> bx;
		cout << "By= ";
		cin >> by;
		cout << "Cx= ";
		cin >> cx;
		cout << "Cy= ";
		cin >> cy;
	}

	void Calculate() {
		AB = sqrt(pow((bx - ax), 2) - pow((by - ay), 2));
		BC = sqrt(pow((cx - bx), 2) - pow((cy - by), 2));
		AC = sqrt(pow((cx - ax), 2) - pow((cy - ay), 2));
		cout << endl;

		if (AB <= 0)
			cout << "AB= " << AB << " - a triangle cannot exist" << endl;
		else if (BC <= 0)
			cout << "BC= " << BC << " - a triangle cannot exist" << endl;
		else if (AC <= 0)
			cout << "AC= " << AC << " - a triangle cannot exist" << endl;
		else if (AB > BC + AC || AC > AB + BC || BC > AB + AC)
			cout << "\n A triangle does not exist" << endl;
		else {
			cout << "AB= " << AB << "centimeters" << endl;
			cout << "BC= " << BC << "centimeters" << endl;
        cout << "AC = " << AC << " см" << endl;

			if (AB == BC)
				cout << "An isosceles triangle : AB = BC\t" << AB << " = " << BC << endl;
			else if (AB == AC)
				cout << "An isosceles triangle : AB = AC\t" << AB << " = " << AC << endl;
			else if (AC == BC)
				cout << "An isosceles triangle : AC = BC\t" << AC << " = " << BC << endl;
			
            else if (AC == BC && BC == AB)
				cout << "An equilateral triangle - sides AB, BC and AC are equal to each other" << endl;
			else
				cout << "The triangle is arbitrary" << endl;

			cout << "Middle line KL" << "\nKL = " << AB / 2 << "centimeters" << endl;
			cout << "Median AM" << "\nAM = " << sqrt(pow(AB, 2) / 2 + pow(AC, 2) / 2 - pow(BC, 2) / 4) << "centimeters" << endl;
		}
	}
};
