#include <stdio.h>

int main(){
	int n;
	printf("nhap mot so nguyen");
	scanf("%d", &n);
	
	if(n < 0){
		printf("so vua nhap la so am");
	} else {
		printf("so vua nhap la so duong");
	}
}