#include <stdio.h> 
#include<stdlib.h> 
#include <time.h> 
int main (){
	srand(time(0)); 
	int  target , number,i; 
	target= rand() %100;
	 i=1;
	 printf ("gia tr? da duoc gan\n") ;
	 while (i>0) {
	 	printf("moi nhap gia tri number\n ") ;	
	 		scanf("%d",&number) ;	 
	 	if (number==target) {
	 		printf("ban nhap dung\n ");
			 i=0; 
		 }else 
		 printf("moi nhap lai\n");
		 
		  
	 }
	 return 0; 

} 
