#include <stdio.h>

int main(){
	//Khai bao bien
	int n;
	//Nhap bien
	scanf("%d", &n);
	//Tim uoc
	for(int i = 1; i <= n; i++){
		if(n % i == 0){
			printf("%d ", i);
		}
	}
	//Ket thuc
	return 0;
}

