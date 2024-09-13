#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int sayac=0;
	int i;
	int a,b,c;
	
	
	for(i=100;i<=999;i++)
	{
		a=sayac/100;
		b=(sayac/10)%10;
		c=sayac%10;
		
		if(a!=b && a!=b && a!=c)
		{ 
		sayac++;
		}
		printf("%d kadar sayi bulunur.",sayac);
		
		
		
		
		
		
	}
	
	
	
	
	
	
	
	return 0;
}