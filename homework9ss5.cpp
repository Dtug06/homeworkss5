#include <stdio.h>
#include<stdlib.h>
int main (){
	
	double a,b,c,total,max,min,tb;
	int choose;
	printf("moi nhap a\n");
	scanf("%lf",&a) ;
	printf("moi nhap b\n");
	scanf("%lf",&b) ;
	printf("moi nhap c\n");
	scanf("%lf",&c) ;
	printf("Menu\n1,Tong 3 so\n2,Trung binh 3 so\n3,So lon nhat\n4,so nho nhat\n"); 
	printf("moi nhap lua chon\n");
	scanf("%d",&choose) ;
	switch (choose) {
		case 1:
		total=a+b+c;
		printf(" tong 3 so la :%lf\n",total) ;
		break;
		case 2:
		tb=(a+b+c)/3;
		printf("trung binh cong 3 so la %lf\n",tb) ;
		break; 
		case 3:
			max = a; if (b > max) max = b; if (c > max) max = c; printf("So lon nhat la: %lf\n", max); break;	
	case 4 :
min = a; if (b < min) min = b; if (c < min) min = c; printf("So nho nhat la: %lf\n", min); break;
case 5 :
 printf("thoat\n");
 return 0;		 
	default :
	printf("khong thuoc truong hop nao ");
}
return 0;
}
	
		
	 
		 
	
 

