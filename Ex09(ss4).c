#include <stdio.h>

int main(){
	//Khai bao bien
	int day, month, years;
	//Nhap vao ngay thang nam
	printf("Moi ban nhap vao ngay thang nam: ");
	scanf("%d %d %d", &day, &month, &years);
	
	//Kiem tra ngay thang nam xem hop le khong
	// kiem tra thang hop le
	switch(month){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			// kiem tra nhung thang co 31 ngay
			if(day <= 31 && day >=1){
				printf("Ngay ban nhap hop le");
			}else{
				printf("Ngay ban nhap khong hop le");
			}
			printf("\nThang ban nhap hop le");
			break;
		case 2:
			//kiem tra co phai nam nhuan khong
			if(years % 400 == 0 || years % 4 == 0 && years % 100 != 0){
				if(day <= 29 && day >= 1){
					printf("Ngay ban nhap hop le");
				}else{
					printf("Ngay ban nhap khong hop le");
				}
			}else{
				if(day <= 28 && day >= 1){
					printf("Ngay ban nhap hop le");
				}else{
					printf("Ngay ban nhap khong hop le");
				}
			}
			printf("\nThang ban nhap hop le");
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			// kiem tra thang co 30 ngay
			if(1 <= day && day <= 30){
				printf("Ngay ban nhap hop le");
			}else{
				printf("Ngay ban nhap khong hop le");
			}
			printf("\nThang ban nhap hop le");
			break;
		default:
			// Nhung thang khong thuoc tu 1 -> 12 thi khong hop le
			printf("\nThang ban nhap khong hop le");
	}	
	if(years < 0){
		printf("\nNam khong hop le");
	}else{
		printf("\nNam hop le");
	}
	return 0;
}

