#include <stdio.h>
#include "myMath.h"

int main(){
		char c;
		double x,sum1,sum2,sum3;
	    printf("Please inset a real number:" );
		while(scanf("%lf" , &x) != 1){
			scanf("%c" , &c);
		}	
			
		//scanf("%lf", &x);
		int d = (int)x;
	    sum1 = sub(add(Exponent(d) ,Power(x,3)) ,2) ;
		sum2 = add(mul(x,3),mul(Power(x,2),2));
		sum3 = sub(div(mul(Power(x,3),4),5),mul(x,2));
		

		printf("The value of f(x) = e^x + x^3 − 2 at the point %lf is: %.4lf \n" , x ,sum1);
		printf("The value of f(x) = 3x + 2X^2 at the point %lf is: %.4lf \n" , x ,sum2);
		printf("The value of f(x) = (4x^3)/5 -2x at the point %lf is: %.4lf \n" ,x ,sum3);
		

	return 0 ;
}
//printf("Power(2,3) = %lf \n" ,Power(2,3));
//	printf("Exponent(e,-3.5) = %lf \n" ,Exponent(-3.5));
//	printf("add(8,9) = %f \n" ,add(8,9));
//	printf("sub(5,4) = %f \n" ,sub(5,4));
//	printf("mul(2.5,-2) = %lf \n" ,mul(2.5,-2));
//	printf("div(5.5,-2) = %lf \n" ,div(5.5,-2));