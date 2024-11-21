#include<stdio.h>

int main(){
	int num, sum;
	printf("moi ban nhap day so co 4 chu so\n");
	scanf("%d",&num);
	int nghin = num / 1000;
	int tram = num % 1000 / 100;
	int chuc = num % 100 / 10;
	int dovi = num % 10 ;
	sum = nghin + tram + chuc + dovi;
	printf("so dao nguoc la: %d", sum);
	
	return 0;
	
}


