#include <iostream>
#include "circle.h"

using namespace std;

int main()
{
	Circle circle;
	circle.setRadius(100.0);
	cout << "Circle's area is:" << circle.getArea();
	cout << "m^2, and size is:" << circle.getCircleSize() << "m" << endl;
	return 0;
}
