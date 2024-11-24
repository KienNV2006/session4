#include <stdio.h>
int main(){
	int a, b, c;
	printf("Moi ban nhap vao 3 so : ");
	scanf("%d%d%d", &a, &b, &c);
	if ((c>a && c<b) || (c<a && c>b)){
		printf ("So thu 3 nam trong khoang giua so thu 1 va so thu 2");
	}else{
		printf("So thu 3 khong nam trong khoang giua so thu 1 va so thu 2");
	}
	return 0;
}