#ifndef POINT_H
#define POINT_H

class Point
{
public:
    Point(double _x, double _y);
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

