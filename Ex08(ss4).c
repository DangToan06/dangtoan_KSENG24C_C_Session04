#include <stdio.h>

int main(){
	//khai bao bien
	int a, b, c;
	//Nhap 3 canh cua 1 tam giac
	printf("Hay nhap vao 3 canh cua 1 tam giac: ");
	scanf("%d %d %d", &a, &b, &c);
	// KIem tra xem 3 canh do co phai 3 canh cua 1 tam giac hay khong
	if(a + b > c && a + c > b && b + c > a){
		printf("Day la 3 canh cua mot tam giac");
	}else printf("Day khong phai la 3 canh cua 1 tam giac");
	//Ket thuc chuong trinh

	return 0;
}

