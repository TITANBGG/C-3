#include <stdio.h>
#include <stdlib.h>
/*
int kattop(int kat,int mal){
	for(int i=0;i<kat;i++){
		
		mal+=mal*0.1+2100;
	}
	return mal;
}

int main(){
	int kat;
	scanf("%d",&kat);
	printf("%d",kattop(kat,2000));
}
*/

int kattoplami(int kat,int mal)
{
	for(int i=0;i<kat;i++)
	{
		
		mal+=mal*0.1+2100;
		
	}
	return mal;
	
}
int main()
{
	int kat;
	printf("Kat Sayisini Girin.");
	scanf("%d",&kat);
	printf("%d",kattoplami(kat,2000));
}