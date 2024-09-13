#include <stdio.h>
#include <stdlib.h>

int maliyet(int kat)
{
	if (kat == 0)
		return 1000;
	
	return maliyet(kat-1)*1.1+100;
}

int main()
{	
	int kat,sonuc;
	printf("Kac kat cikilacak:");
	scanf("%d",&kat);
	
	sonuc=maliyet(kat);
	
	printf("%d kat icin toplam maliyet = %d",kat,sonuc);
	
	return 0;
}