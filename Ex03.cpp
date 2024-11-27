#include <stdio.h>

int main(){
	//Khai bao bien
	int pass;
	//Nhap mat khau
	printf("Hay nhap mat khau cua ban: ");
	scanf("%d", &pass);
	//Kiem tra mat khau
	while(pass != 2006){
		printf("Mat khau ban nhap khong chinh xac: ");
		scanf("%d", &pass);
	}
	//In dap an
	printf("Mat khau ban nhap chinh xac!!!");
	//Ket thuc
	return 0;
}

