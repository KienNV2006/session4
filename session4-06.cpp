#include <stdio.h>
int main(){
	int y;
	printf("Moi ban nhap nam : ");
	scanf("%d", &y);
	if ((y%400==0) || (y%4==0 && y%100!=0)){
		printf("Day la nam nhuan");
	}else{
		printf("Day la nam khong nhuan");
	}
	return 0;
}