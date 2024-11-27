#include<stdio.h>
#include<math.h>

int main(){
	int count = 0, num = 2, n, i;
	scanf("%d", &n);
	
	while(count < n){
		int check = 1;
		for(i = 2; i <= sqrt(num); i++){
			if(num % i == 0){
				check = 0;
				break;
			}
		}
		if(check == 1){
			printf("%d ", num);
			count++;
		}
		num++;
	}
	return 0;
}
