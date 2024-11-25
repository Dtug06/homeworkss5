#include<stdio.h> 
int main (){
	double   a,b;
	double resuit ; 
	int tt ; 
	printf("moi nhap a\n"); 
	scanf("%lf",&a) ;
	printf("moi nhap b\n"); 
	scanf("%lf",&b) ;
	printf("1,tong 2 so\n2,hieuhaiso\n3,thuong 2 so\n4,tich hai so\n") ;
	printf("thuat toan thuc hien\n");
	scanf("%d",&tt) ;
 switch (tt){
 	case 1 :
 		resuit=a+b;
 		break;
	case 2:
		resuit=a-b;
		break;
	case 3:
	      resuit=a/b;
		break;
     case 4:
     	resuit=a*b;
     	break;
     	default :
    		printf("khong co truong hop nao\n");
		
	  
 } 
 printf("ket qua la %lf\n",resuit);
 return 0;
	
} 
