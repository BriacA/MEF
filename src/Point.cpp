#include "Point.h"

int Point::idInc = 0;

Point::Point(double _x, double _y)
{
    //ctor
    x = _x;
    y = _y;

    id = idInc;
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
    return sqrt((p.getX()-x)*(p.getX()-x)+(p.getY()-y)*(p.getY()-y));
}
