#include<stdio.h>
int main(){
	float high, deep, dienTich;
	printf("moi ban nhap chieu dai ");
	scanf("%f", &high);
    printf("moi ban nhap chieu cao  ");
	scanf("%f", &deep);
	dienTich = high + deep;
	printf("dien tich cua hinh tam giac la : %.2f", dienTich);
	return 0;
	
}

