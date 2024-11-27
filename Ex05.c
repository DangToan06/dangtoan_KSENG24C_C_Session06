#include<stdio.h>

int main(){
	//Khai bao bien va nhap
	int month, year;
	printf("Nhap so nam va so thang: ");
	scanf("%d %d", &year, &month);
	//Kiem tra thang
	switch(month){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("So ngay trong nam %d va thang %d la 31 ngay", year, month);
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("So ngay trong nam %d va thang %d la 30 ngay",  year, month);
			break;
		case 2:
			//Kiem tra co phai nam nhuan
			if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
				printf("So ngay trong nam %d va thang %d la 29 ngay",  year, month);
			}else{
				printf("So ngay trong nam %d va thang %d la 28 ngay", month, year);
			}
			break;
	}
	//Ket thuc
	return 0;
}
