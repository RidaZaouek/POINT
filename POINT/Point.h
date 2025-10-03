#pragma once
class Point
{
private:
	float X;
	float Y;
public:
	Point(float ,float);
	float distance(Point p);
	void afficher();
};

