#include <stdio.h>

int main(){
	// khai bao bien
	long long num1, num2, num3;
	// nhap gia tri
	printf("Nhap 3 so bat ky: ");
	scanf("%lld %lld %lld", &num1, &num2, &num3);
	// kiem tra so thu 3 co nam giua 2 so khong
	if(num3 < num2 && num3 > num1 || num3 > num2 && num3 < num1){
		printf("%lld nam giua %lld va %lld", num3, num1, num2);
	}else{
		printf("%lld khong nam giua %lld va %lld", num3, num1, num2);
	}
	// ket thuc chuong trinh

	return 0;
}

