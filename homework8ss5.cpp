#include <stdio.h> 
#include <stdlib.h> 
int main(){
 
int a,b,remainder,BCNN,tempA,tempB; 
printf("nhap gia tri a ");
scanf("%d",&a) ;
tempA=a; 
printf("nhap gia tri b");
scanf("%d",&b);
tempB=b; 
remainder=a%b;
while (remainder!=0) {
	a=b;
	b=remainder;
	remainder=a%b; 
}
printf("uoc chung lon nhap cua 2 so la :%d\n",b);
BCNN=(abs(tempA*tempB))/b;
printf("gia tri bcnn cua hai so la %d",BCNN) ;
return 0; 
}
