#include<stdio.h>
#include<math.h>

int main(){
	double a, b, c, delta;
	scanf("%lf %lf %lf", &a, &b, &c);
	
	if(a == 0 && b == 0 && c == 0){
		printf("pt vo so nghiem");
	}else if(a == 0 && b == 0 && c != 0){
		printf("pt vo nghiem");
	}else if(a == 0 && b != 0){
		printf("pt co nghiem la: %.2lf", -c/b);
	}else{
		delta = pow(b,2) - 4*a*c;
		if(delta < 0){
			printf("pt vo nghiem");
		}else if(delta == 0){
			printf("pt co nghiem la: %.2lf", (-b)/(2*a));
		}else{
			printf("pt co 2 nghiem \nx1 = %.2lf\nx2 = %.2lf", ((-b + sqrt(delta))/(2*a)), ((-b - sqrt(delta))/(2*a)));
		}
	}
	return 0;
}


