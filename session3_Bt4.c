#include<stdio.h>
int main(){
	float toan, van, anh, sum, tb;
	printf("moi ban nhap diem toan");
	scanf("%f",&toan);
	printf("moi ban nhap diem van");
	scanf("%f",&van);
	printf("moi ban nhap diem anh");
	scanf("%f",&anh);
	sum = toan + van + anh;
	tb = sum / 3;
	printf("diem toan :%.2f , diem van :%.2f ,diem anh :%.2f\n", toan, van, anh);
    printf("tong diem cua ban la: %.2f\n", sum);
    printf("diem trung binh cua ban la: %.2f", tb);
return 0;
}
