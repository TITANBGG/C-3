#include<stdio.h>
#include<stdlib.h>

int toplam=1000;

int maliyet(int kat)
{
	int i;
	if(kat==0)
	{
		return toplam;
	}
	else
	{
		toplam+=(toplam/10)+100;
		return maliyet(kat-1);
	}
}



int main(){
	
	int kat;
	printf("binanin kac katli olacagini giriniz ");
	scanf("%d",&kat);
	
	printf("toplam maliyet= %d",maliyet(kat));
	return 0;
}
