#include <stdio.h>

int main(){
	int fibo1 = 1, fibo2 = 1, fiboN, n;
	scanf("%d", &n);
	int i;
	if(n == 1){
		printf("1 ");
	}else if(n >= 2){
		printf("1 1 ");
	}
	for(i = 3; i <= n; i++){
		fiboN = fibo1 + fibo2;
		fibo1 = fibo2;
		fibo2 = fiboN;
		printf("%d ", fiboN);
	}

	return 0;
}

