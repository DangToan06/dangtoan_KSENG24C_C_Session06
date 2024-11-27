#include <stdio.h>

int main(){
	//Khai bao bien
	int a[5], le = 0, chan = 0;
	//Nhap 5 so
	for(int i = 0; i < 5; i++){
		scanf("%d", &a[i]);
	}
	//xac d?nh so chan le
	for(int i = 0; i < 5; i++){
		if(a[i] % 2 == 0){
			chan++;
		}else{
			le++;
		}
	}
	//In ket qua
	printf("Co %d so chan va %d so le", chan, le);
	return 0;
}

