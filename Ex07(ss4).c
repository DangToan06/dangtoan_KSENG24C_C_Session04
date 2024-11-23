#include <stdio.h>

int main(){
	// khai bao bien
	int years;
	// nhap so nam
	printf("Hay nhap so nam: ");
	scanf("%d", &years);
	// kiem tra nam nhuan
	if(years % 400 == 0 || years % 4 == 0 && years % 100 != 0){
		printf("Day la nam nhuan");
	}else{
		printf("Day khong phai la nam nhuan");
	}
	//Ket thuc chuong trinh

	return 0;
}

