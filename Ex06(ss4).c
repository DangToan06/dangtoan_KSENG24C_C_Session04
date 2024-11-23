#include <stdio.h>

int main(){
	//khai bao bien
	int oldElectric, newElectric, numElectric, bill;
	//Nhap so dien dau thang va cuoi thang
	printf("Nhap so dien dau thang va cuoi thang: ");
	scanf("%d %d", &oldElectric, &newElectric);
	
	//Kiem tra so dien nhap vao khong duoc la so am va so dien moi phai lon hon so dien cu
	if(oldElectric <= 0 || oldElectric > newElectric){
		return 1;
	} 
	//Tinh so dien da su dung trong thang
	numElectric = newElectric - oldElectric;
	
	//Tinh gia tien dien
	if(0 <= numElectric && numElectric < 50){
		bill = numElectric * 10000;
	}else if(50 <= numElectric && numElectric < 100){
		bill = numElectric * 15000;
	}else if(100 <= numElectric && numElectric < 150){
		bill = numElectric * 20000;
	}else if(150 <= numElectric && numElectric < 200){
		bill = numElectric * 25000;
	}else{
		bill = numElectric *30000;
	}
	//In ra so tien dien
	printf("Tien dien thang vua roi la: %d", bill);
	//Ket thuc chuong trinh

	return 0;
}

