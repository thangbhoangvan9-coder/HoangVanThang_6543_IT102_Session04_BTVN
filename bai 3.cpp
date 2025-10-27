#include <stdio.h>

int main(){
	int n;
	printf("nhap mot so nguyen");
	scanf("%d", &n);
	
	if (n % 3 == 0 && n % 5 == 0){
		printf("so chia het cho ca ba va nam");
	} else if(n % 3 == 0){
		printf("so chia het cho ba");
	} else if(n % 5 == 0){
		printf("so chia het cho nam");
	}
	
	

		
		
	
	
}