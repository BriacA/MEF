#ifndef FONCTIONS_H
#define FONCTIONS_H


class Fonctions
{
public:
    Fonctions();
    virtual ~Fonctions();
    static double angle( Point p1,Point p2,Point p3, int sens);
    static double degToRad(double deg);
    static double getAngleComplentX(double x,double y);
    static String getTextInt(int nombre,int l);
    static double longeurAuPoint(double x0,double y0,double x1,double y1);
    static String parseToScientificNotation(double value);
    static double radToDeg(double rad);
protected:
private:
    static double getAngleAxeX(double x,double y);
    static int getFacteur90(double x,double y);
    static int getFacteurAlpha(double x,double y);
};

#endif // FONCTIONS_H
