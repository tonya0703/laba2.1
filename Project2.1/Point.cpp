//Point.cpp
#include "Point.h"

#include <sstream>
#include <string>
#include <iostream>

Point::Point() {
    first = 0;
    second = 0;
}

Point::Point(double f, double s) {
    first = f;
    second = s;
}

Point::Point(const Point& n) {
    first = n.first;
    second = n.second;
}

Point::~Point() { }


void Point::setFirst(double value) {
    first = value;
}
void Point::setSecond(double value) {
    second = value;
}

double Point::operator*() const {
    return sqrt(first * first + second * second);
}

Point& Point::operator ++() {
    first++;
    return *this;
}

Point& Point::operator --() {
    first--;
    return *this;
}

Point Point::operator ++(int) {
    Point n(*this);
    second++;
    return n;
}

Point Point::operator --(int) {
    Point n(*this);
    second--;
    return n;
}

ostream& operator << (ostream& out, const Point& r)
{
    out << string(r);
    return out;
}

istream& operator >> (istream& in, Point& r)
{
    cout << " first = "; in >> r.first;
    cout << " second = "; in >> r.second;
    cout << endl;
    return in;
}

Point& Point::operator = (const Point& n) {
    first = n.first;
    second = n.second;

    return *this;
}

Point::operator string () const
{
    stringstream ss;
    ss << " first = " << first << endl;
    ss << " second = " << second << endl;

    return ss.str();
}