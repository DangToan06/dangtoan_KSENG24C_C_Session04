#include <stdio.h>

int main(){
	// khai bao bien so nguyen
	long long number;
	// nhap so nguyen
	printf("Nhap so nguyen: ");
	scanf("%lld", &number);
	// kiem tra la so chan hay so le va in ra man hinh
	if(number % 2 == 0){
		printf("So ban vua nhap vao la so chan");
	}else{
		printf("So ban vua nhap vao la so le");
	}
	// ket thuc chuong trinh

	return 0;
}

