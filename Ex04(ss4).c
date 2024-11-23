#include <stdio.h>

int main(){
	// khai bao bien
	int month;
	// nhap gia tri cho bien
	printf("Hay nhap so thang: ");
	scanf("%d", &month);
	// kiem tra so ngay cua thang day va kiem tra thang nhap vao hop le khong
	switch(month){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("thang %d co 31 ngay", month);
			break;
		case 2:
			printf("thang 2 co 29 ngay");
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("thang %d co 30 ngay", month);
			break;
		default:
			printf("thang ban nhap khong hop le!!!");
	}
	//ket thuc chuong trinh

	return 0;
}

