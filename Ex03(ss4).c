#include <stdio.h>

int main(){
	//khai bao bien
	long long number;
	//nhap so can kiem tra
	printf("Hay nhap 1 so nguyen: ");
	scanf("%lld", &number);
	//kiem tra so do chia het cho 3,chia het cho 5 or chia het cho 3 & 5 khong
	 if(number % 3 == 0 && number % 5 == 0){
	 	printf("So ban vua nhap chia het cho co 3 va 5");
	 }else if(number % 3 == 0 && number % 5 != 0){
	 	printf("So ban vau nhap chi chia het cho 3");
	 }else if(number %3 != 0 && number % 5 == 0){
	 	printf("So ban vua nhap vao chi chia het cho 5");
	 }else{
	 	printf("So ban vua nhap vao khong chia het cho 5 va 3");
	 }
	 //ket thuc chuong trinh

	return 0;
}

