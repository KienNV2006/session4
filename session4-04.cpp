#include <stdio.h>
int main(){
	int m, y;
	printf("Moi ban nhap thang, nam: ");
	scanf("%d%d", &m, &y);
	switch (m){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			printf("thang nay co 31 ngay\n");
			break;
		case 4: case 6: case 9: case 11:
			printf("thang nay co 30 ngay\n");
			break;
		case 2:
		 if ((y%400==0 ) || (y%4==0 && y%100!=0 )){
		 	printf("Thang cua nam nay co 29 ngay\n");
		 }else{
		 	printf("Thang nay cua nam nay co 28 ngay\n");
		 }
		 	break;
		 Default:
		 	printf("Gia tri nhap khong hop le");
	}
	return 0;
}