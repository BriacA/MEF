#include "Point.h"

//Author : Clement ABADIE

int Point::idInc = 0;

Point::Point(double _x, double _y)
{
    //ctor
    this->x = _x;
    this->y = _y;

    this->id = idInc;
    idInc++;
}

Point::~Point()
{
    //dtor
}

double Point::getX()
{
    return this->x;
}
double Point::getY()
{
    return this->y;
}
int Point::getId()
{
    return this->id;
}
double Point::distanceA(Point p)
{
    return sqrt((p.getX()-this->x)*(p.getX()-this->x)+(p.getY()-this->y)*(p.getY()-this->y));
}
