#include <stdio.h>
#include <math.h>

int main(){
	int n, check = 0;
	scanf("%d", &n);
	
	if(n <= 1){
		check = 1;
	}
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			check = 1;
		}
	}
	if(check == 1){
		printf("No");
	}else{
		printf("Yes");
	}

	return 0;
}

