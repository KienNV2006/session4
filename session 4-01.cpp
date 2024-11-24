#include <stdio.h>
int main(){
	int number;
	printf("Nhap vao mot so nguyen");
	scanf("%d", &number);
	if (number==0) {
		printf("Day khong phai so duong cung khong phai so am");
	}else if (number>0){
		printf("Day la so nguyen duong");
	}else{
		printf("Day la so nguyen am");
	}
}
