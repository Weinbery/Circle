#ifndef CIRCLE_H
#define CIRCLE_H

class Circle
{
public:
	Circle();
	Circle(float rad);
	~Circle();

public:
	void setRadius(const float rad);
	float getArea() const;
	float getCircleSize() const;
private:
	float radius;
};

#endif // CIRCLE_H
