#include "circle.h"

const float PI = 3.14;

Circle::Circle()
{
}

Circle::Circle(float rad) : radius(rad)
{
}

Circle::~Circle()
{
}

void Circle::setRadius(const float rad)
{
	radius = rad;
}

float Circle::getArea() const
{
	return PI * radius * radius;
}

float Circle::getCircleSize() const
{
	return 2 * PI * radius;
}
