
//Author : Clement ABADIE

#ifndef POINT_H
#define POINT_H

class Point
{
public:
    Point();
    Point(double x, double y);
    virtual ~Point();

    double getX();
    double getY();
    int getId();
    double distanceA(Point p);

protected:
private:
    double x;
    double y;
    int id;
    static int idInc;
};

#endif // POINT_H

