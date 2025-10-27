#include<stdio.h>

int main(){
	int a, b, c;
	printf("nhap cac canh tam giac");
	scanf("%d %d %d", &a, &b, &c);
	
	if(a + b > c && a + c > b && b + c > a){
		printf("la ba canh cua tam giac\n");
	} else {
		printf("khong phai la ba canh cua tam giac\n");
	}
}