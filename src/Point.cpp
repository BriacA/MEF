
//Author : Clement ABADIE

#include "Point.h"


int Point::idInc = 0;

Point::Point()
{

}

Point::Point(double x, double y)
{
    //ctor
    this->x = x;
    this->y = y;

    this->id = this->idInc;
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
    //return sqrt((p.getX()-this->x)*(p.getX()-this->x)+(p.getY()-this->y)*(p.getY()-this->y));
    return 0;
}
