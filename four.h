#pragma once
#include "ten.h"
#include<iostream>
#include<cmath>
using namespace std;

class four : public ten {	//	Прямокутний трикутник
	float R, r;	//	Довжини вписаного та описаного радіусів прямокутного трикутника

public:

	four() {	//	Конструктор за замовченням
		cout << "\n A right triangle" << endl;
		AB = 0;
		BC = 0;
		AC = 0;
		R = 0;
		r = 0;
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
			if (AB == sqrt(pow(AC, 2) + pow(BC, 2))) {
        	cout << "The hypotenuse is the side AB with length " << AB << "centimeters" << endl;
				R = AB / 2;
				r = (BC + AC - AB) / 2;
				cout << "Radius of the circle R= " << R << "centimeters" << endl;
				cout << "Radius of the inscribed circle r= " << r << "centimeters" << endl;
			}
			else if (AC == sqrt(pow(AB, 2) + pow(BC, 2))) {
				cout << "The hypotenuse is the side AC with length " << AC << "centimeters" << endl;
				R = AC / 2;
				r = (AB + BC - AC) / 2;
				cout << "Radius of the circle R= " << R << "centimeters" << endl;
				cout << "Radius of the inscribed circle r= " << r << "centimeters" << endl;
			}
			else if (BC == sqrt(pow(AC, 2) + pow(AB, 2))) {
				cout << "The hypotenuse is the side BC with length" << BC << "centimeters" << endl;
				R = BC / 2;
				r = (AB + AC - BC) / 2;
				cout << "Radius of the circle R= " << R << "centimeters" << endl;
				cout << "Radius of the inscribed circle r= " << r << "centimeters" << endl;
			}
			else
				cout << "The triangle is not right-angled" << endl;
		}
		
        else
			cout << "A triangle does not exist" << endl;
	}
};
