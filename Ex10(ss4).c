#include <stdio.h>

int main(){
	
	// Khai bao bien
	long long a, b, c, max, min, mid;
	
	// Nhap du lieu 
	printf("Hay nhap vao 3 so bat ky: ");
	scanf("%lld %lld %lld", &a, &b, &c);
	
	//So sanh 3 so
	// 3.1 Tam goi so nho nhat va lon nhat la a
	max = a;
	min = a;
	// 3.2 tim so be nhat 
	if(b < min){
		min = b;
	}
	if(c < min){
		min = c;
	}
	
	// 3.3 tim so lon nhat
	if(b > max){
		max = b;
	}
	if(c > max){
		max = c;
	}
	
	// 3.4 tim so o giua
	mid = a + b + c - min - max;
	
	// In ket qua
	printf("So xap xep lai la: %lld %lld %lld", min, mid, max);
	//Ket thuc chuong trinh

	return 0;
}

