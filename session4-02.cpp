#include <stdio.h>
int main(){
	int number;
	printf("Nhap vao mot so nguyen");
	scanf("%d", &number);
	if (number<0) {
		printf("Day khong phai so nguyen duong");
	}else if (number%2==0){
		printf("Day la so chan");
	}else{
		printf("Day la so le");
	}
}