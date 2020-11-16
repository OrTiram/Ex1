#include "myMath.h"

double Exponent(int x) {
	double result = 1 ;
	if(x == 0 ) return result;
	if(x > 0){
	 while(x > 0 ){
		result*=EXP_POW;
		x--;
	  }
	  return result;
	}
	if(x < 0 ){
	return Power(EXP_POW , x);	
	}
	return result;
}

double Power(double x , int y){
	int y1;	
	double result = 1;
	if(y == 0 ) return result;
	if(y < 0){
	   y1 = -1*y ;
	  while(y1 > 0){
	  result*=(1/x);
      y1--;
	}
	 	return result;
	}
	while(y > 0 ){
		result*=x;
		y--;
	}
	return result;
}