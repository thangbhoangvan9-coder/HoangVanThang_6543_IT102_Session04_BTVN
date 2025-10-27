#include<stdio.h>

int main(){
	int n;
	printf("nhap thang");
	scanf("%d", &n);
	
	if(n == 1 || n == 3 || n == 5 || n == 7 || 
        n == 8 || n == 10 || n == 12){
		printf("thang %d co 31 ngay\n", n);	
	} else if(n == 4 || n == 6 || n == 9 || n == 11){
		printf("thang %d co 30 ngay\n", n);
	} else if(n == 2){
		printf("thang 2 co 28 hoac 29 ngay");
	} else {
		printf("thang khong hop le");
	}
	
	
	
	
	
}