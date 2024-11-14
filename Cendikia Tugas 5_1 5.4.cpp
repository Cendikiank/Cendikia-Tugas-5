#include <stdio.h>

int main()
{
	int a, b, c;
	
	printf("Masukkan angka A : ");
	scanf("%d", &a);
	printf("Masukkan angka B : ");
	scanf("%d", &b);
	printf("Masukkan angka C : ");
	scanf("%d", &c);
	
	if(a > b && a > c){
		printf("\nNilai A Tercetak : %d", a);
	}
	
	if(b > a && b > c){
		printf("\nNilai B Tercetak : %d", b);
	}
	
	if(c > a && c > b){
		printf("\nNilai C Tercetak : %d", c);
	}
	
	printf("\nProgram Selesai\n");
	return 0;
}
