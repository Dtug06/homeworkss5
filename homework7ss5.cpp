#include <stdio.h> 
int main(){
 
int a,b,remainder;
printf("nhap gia tri a ");
scanf("%d",&a) ;
printf("nhap gia tri b");
scanf("%d",&b);
remainder=a%b;
while (remainder!=0) {
	a=b;
	b=remainder;
	remainder=a%b; 
}
printf("uoc chung lon nhap cua 2 so la :%d\n",b);
return 0; 
}
