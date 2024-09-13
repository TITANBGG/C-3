#include<stdio.h>
#include<stdlib.h>

void zam(int maas[],int boyut)
{
	int i;
	for(i=0;i<boyut;i++)
	{
		if(maas[i]>=3000)
		{
			maas[i]+=maas[i]/10;
		}
		else
		{
			maas[i]+=(maas[i]/10)+100;
		}
	}
	printf("yeni zamli maas sunlardir\n");
	for(i=0;i<boyut;i++)
	{
		printf("%d\n",maas[i]);
	}
}

int main()
{
	int i;
	int maas[10];
	
	printf("kullanicilarin maaslarini giriniz");
	for(i=0;i<10;i++)
	{
		scanf("%d",&maas[i]);
	}
	zam(maas,10);
	return 0;	
}
