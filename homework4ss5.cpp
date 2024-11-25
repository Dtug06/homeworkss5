#include <stdio.h> 
int main (){
	int multiplicationTable ,i;
	i =1;
	printf("moi nhap bang cuu chuong can in ra\n");
int a =1;	
	while ( a>0){
		scanf("%d",&multiplicationTable);
		if (multiplicationTable<1||multiplicationTable>10){
	printf("bang cuu chuong khon hop le");
}else 
a=0;
	}
	printf ("bang cu chuong %d\n",multiplicationTable);
	while (i<11){
		printf("%d*%d=%d\n",multiplicationTable,i,multiplicationTable*i);	
		i++	;
	}
	return 0;



	
	
} 
