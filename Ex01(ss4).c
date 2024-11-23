#include <stdio.h>

int main(){
	// khai bao bien so nguyen
	long long number;
	// nhap so nguyen
	printf("Nhap so nguyen: ");
	scanf("%lld", &number);
	// kiem tra la so am hay la so duong va in ra man hinh
	if(number >= 0){
		printf("So ban vua nhap vao la so duong");
	}else{
		printf("So ban vua nhap vao la so am");
	}
	// ket thuc chuong trinh
	return 0;
}

