#include <stdio.h>
#include <stdlib.h>

void zam(int dizi[])
{
	for (int i=0; i<10; i++)
	{
		if (dizi[i]<=3000)
			dizi[i]=dizi[i]*1.1+100;
			
		else 
			dizi[i]=dizi[i]*1.1;		
	}
}

int main()
{
	int maaslar[10];
	
	printf("Lutfen maaslari giriniz:\n");
	
	for (int i=0; i<10; i++)
	{
		scanf("%d",&maaslar[i]);
	}
	
	zam(maaslar);
	
	printf("Zamli maaslar:\n");
	
	for (int k=0; k<10; k++)
	{
		printf("%d\n",maaslar[k]);
	}
		
		return 0;
}