#include <stdio.h>

int main(){
	//Khai bao bien
	int a, b, c, d, e;
	//Nhap du leu
	printf("Nhap 5 so nguyen: ");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	//Kiem tra xem co phai so le khong
	if(a % 2 == 0) a = 0;
	if(b % 2 == 0) b = 0;
	if(c % 2 == 0) c = 0;
	if(d % 2 == 0) d = 0;
	if(e % 2 == 0) e = 0;
	//Tinh tong cac so le
	int sum = a + b + c + d + e;
	//In ket qua
	printf("Tong ca so le la: %d", sum);
	//Ket thuc
	return 0;
}

