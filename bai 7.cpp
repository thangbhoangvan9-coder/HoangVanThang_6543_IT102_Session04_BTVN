#include<stdio.h>

int main(){
	int n;
	printf("nhap so nam");
	scanf("%d", &n);
	
	if((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0)){
		printf("nam %d la nam nhuan\n", n);
	} else {
		printf("nam %d khong phai la nam nhuan\n", n);
	}
}