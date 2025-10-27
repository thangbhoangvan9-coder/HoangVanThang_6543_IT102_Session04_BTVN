#include<stdio.h>

int main(){
	int day, month, year;
	int maxday;
	
	printf("Nhap ngay");
     scanf("%d", &day);
	printf("nhap thang");
	scanf("%d", &month);
	printf("nhap nam");
	scanf("%d", &year);
	
	
	
	if(month < 1 || month > 12){
		printf("ngay khong hop le");
	}
	
	switch (month){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			maxday = 31;
			break;
		case 4: case 6: case 9: case 11:
			maxday = 30;
		    break;
		case 2:
			if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
			  maxday = 29;
		     else 
		      maxday = 28;
		       break;
			
	}
	
	if(day >= 1 && day <= maxday)
	 printf("ngay thang nam hop le\n");
	else
	 printf("ngay thang nam khong hop le\n");
}