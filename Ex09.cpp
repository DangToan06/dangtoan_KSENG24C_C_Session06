#include <stdio.h>
#include<math.h>

int main(){
	int temp;
	
	for(int i = 100; i < 1000; i++){
		temp = i;
		int num1 = temp / 100;
		temp = temp % 100;
		int num2 = temp / 10;
		int num3 = temp % 10;
		int num = pow(num1,3) + pow(num2,3) + pow(num3,3);
		if(i == num){
			printf("%d\n", i);
		}
	}

	return 0;
}

