#include<stdio.h>
#include<stdlib.h>
//15 kiiþinin maaþý alýnacak zam yapýlacak 8000 ve üzeri %25 
//8000 altý kiþiler %25 ve 1000 tl alacak 
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
	
	printf("Lütfen maaslari girin:\n");
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
