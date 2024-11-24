#include <stdio.h>
int main(){
	float a, b, c;
	printf("Moi ban nhap vao 3 canh cua tam giac, 2 canh goc vuong va 1 canh huyen lan luot la: ");
	scanf("%f%f%f", &a, &b, &c);
	if (a>0 && b>0 && c>0 && (a+b>c) && (a+c>b) && (b+c>a)){
		printf("Day la 3 canh cua tam giac");
	}else{
		printf("Day khong phai la 3 canh cua tam giac");
	}
	return 0;
}