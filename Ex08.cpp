#include<stdio.h>
#include<math.h>

int main(){
	double rate, money, month;
	printf("Nhap so tien gui: ");
	scanf("%lf", &money);
	printf("Nhap so tien lai(moi thang): ");
	scanf("%lf", &rate);
	printf("Nhap so thang gui: ");
	scanf("%lf", &month);
	
	rate = rate / 100;
	
	double moneyAfter = money * pow(1 + rate,month);
	
	double interest = moneyAfter - money;
	
	printf("Tien lai la: %.3lf\nTien nhan duoc la: %.3lf", interest, moneyAfter);
	return 0;
}

