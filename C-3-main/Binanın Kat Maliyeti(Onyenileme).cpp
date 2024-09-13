#include<stdio.h>


double maliyet(int x){
	
	if(x == 1 || x == 0){
		return 2000;
	}
	
	else return maliyet(x-1) + (((maliyet(x-1)*10))/100)+100;
	
}

int main(){

/*	
	int a,b,i;
	
	printf("Kac Kat Istiyorsunuz:");
	scanf("%d",&a);
	
	for(i=1;i<=a;i++){
		
		printf("%d. katin maliyeti:%.2f TL\n",i,maliyet(i));
		b = maliyet(i) + b; 
		
		
	}
	printf("\nToplam Maliyet:%d TL",b);
	
*/
int i=0;
int a,b;
a=++i	
}





