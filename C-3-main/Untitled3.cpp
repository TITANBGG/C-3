#include<stdio.h>
#include<stdlib.h>
//15 kii�inin maa�� al�nacak zam yap�lacak 8000 ve �zeri %25 
//8000 alt� ki�iler %25 ve 1000 tl alacak 
void zam(int dizi[])
{
	for(int i=0;i<15;i++)
	if(dizi[i]<=8000)
	dizi[i]=dizi[i]*1.25;
	else
     dizi[i]=dizi[i]*1.25+1000;
}
int main(){
	int maas[15];
	
	printf("L�tfen maaslari girin:\n");
	for(int i=0;i<15;i++)
	{
		scanf("%d",&maas[i]);
	}
	zam(maas);
printf("zamli hali :\n");
for(int k=0;k<15;k++)
{printf("zamli hali %d\n",maas[k]);
}
return 0;
}
