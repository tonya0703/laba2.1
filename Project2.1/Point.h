//Point.h
#pragma once
#include <string>
#include <iostream>

using namespace std;

class Point
{
private:
	double first;
	double second;
public:
	Point();
	Point(double f, double s);
	Point(const Point& n);
	~Point();

	double getFirst() const { return first; };
	double getSecond() const { return second; };

	void setFirst(double);
	void setSecond(double);

	operator string() const;

	double operator*() const;

	Point& operator = (const Point&);

	friend ostream& operator << (ostream&, const Point&);
	friend istream& operator >> (istream&, Point&);

	Point& operator ++();
	Point& operator --();
	Point operator ++(int);
	Point operator --(int);
};
