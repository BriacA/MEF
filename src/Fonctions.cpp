#include "Fonctions.h"
#include <string>
#include <math.h>

Fonctions::Fonctions()
{
    //ctor
}

Fonctions::~Fonctions()
{
    //dtor
}

	private static double LIMIT_NULL = 0.0000000000001;

	/*
	 * @param p1
	 * @param p2
	 * @param p3
	 * @param sens si sens<0 on chercher un angle<0 sinon on cherche un angle>0
	 * @return l'angle p1,p2,p3
	 */
	double Fonctions::angle(PointMef p1,PointMef p2,PointMef p3,int sens){
		//on rèmenes les point avec le centre sur le poitn p(0,0)c
		double p1x = p1.getX()-p2.getX();
		double p1y = p1.getY()-p2.getY();
		double p3x = p3.getX()-p2.getX();
		double p3y = p3.getY()-p2.getY();

		double alpha1 = Fonctions::getAngleComplentX(p1x, p1y);
		double alpha3 = Fonctions::getAngleComplentX(p3x, p3y);

		double angle = alpha3-alpha1;
		if(sens>=0){
			if(angle>=0){
				return angle;
			}
			else{
				return 2*Math.PI+angle;
			}
		}
		else{
			if(angle>=0){
				return angle-2*Math.PI;
			}
			else{
				return angle;
			}
		}
	}

	/*
	 * @param x
	 * @param y
	 * @return l'angle entre l'axe x et [p(0,0,);p(x,y)]
	 */
	double Fonctions::getAngleComplentX(double x,double y){
		double angle = Fonctions::etAngleAxeX(x, y);
		double facteurAlpha = Fonctions::getFacteurAlpha(x, y);
		double facteur90 = Fonctions::getFacteur90(x, y);

		return facteur90*(Math.PI/2)+facteurAlpha*angle;
	}

	static int Fonctions::getFacteurAlpha(double x,double y){
		if(x<0 && y<0){
			return 1;
		}else if(x<0 && y>=0){
			return -1;
		}else if(x>=0 && y<0){
			return -1;
		}else{
			return 1;
		}
	}

	static int Fonctions::getFacteur90(double x,double y){
		if(x<0 && y<0){
			return 2;
		}else if(x<0 && y>=0){
			return 2;
		}else if(x>=0 && y<0){
			return 4;
		}else{
			return 0;
		}
	}

	static double Fonctions::getAngleAxeX(double x,double y){
		/*
		 * on gère manuelement les cas limit
		 */
		if(Math.abs(y)<LIMIT_NULL){
			return 0.0;
		}
		if(Math.abs(x)<LIMIT_NULL){
			return Math.PI/2.0;
		}
		/*
		 * on calcul le hipoténius du trianple p(0,0),p(x,y),p(x,0)
		 */
//		double h = longeurAuPoint(0.0,0.0,x,y);
//		double angleT = Math.atan(Math.abs(x)/Math.abs(y));
		double angleT2 = Math.atan2(Math.abs(y),Math.abs(x));
//		double angle = Math.asin(Math.abs(x)/h);
		return angleT2;
	}

	/*
	 * @param x0
	 * @param y0
	 * @param x1
	 * @param y1
	 * @return distance p0 p1
	 */
	static double Fonctions::longeurAuPoint(double x0,double y0,double x1,double y1){
		double deltaX = x1-x0;
		double deltaY = y1-y0;
		return Math.sqrt(deltaY*deltaY+deltaX*deltaX);
	}

	/**
	 * @param rad
	 * @return l'angle rad en degree
	 */
	static double Fonctions::radToDeg(double rad){
		return 180*rad/Math.PI;
	}

	/*
	 * @param deg
	 * @return angle deg en radian
	 */
	static double Fonctions::degToRad(double deg){
	    math::
		return deg*Math.PI/180;
	}

	/*
	 * @param nombre
	 * @param l
	 * @return
	 */
	static String Fonctions::getTextInt(int nombre,int l){

		std text = new std(nombre);
		while(text::size_t<l){
			text = "0"+text;
		}
		return text;
	}



	/**
	 * @param value
	 * @return the string value
	 */
	public static String parseToScientificNotation(double value) {
		Format format = new DecimalFormat("0.00000000000E00");
		String text =  format.format(new Double(value));
		if(Math.abs(value)>=1){
			text=text.replace("E", "E+");
		}else if(Math.abs(value)<LIMIT_NULL){
			text=text.replace("E", "E+");
			text=text.replace("-", "");
		}
		return text.replace(",", ".");
	}
