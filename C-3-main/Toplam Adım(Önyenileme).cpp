#include<stdio.h>

int adim(int x){
	
	if (x == 0 || x == 1) {
	return 4000;                                     // Buras� ilk g�n 4000 ad�m att��� i�in ko�ulda ilk yerleri yazd�k 
}
	else return adim(x-1) + adim(x-1)*0.1;    // Burda toplaman�n sa� taraf�nda %10 u al�p �st�ne ekledik
	
}


int main(){
	
	int a,b;
	int j;
	
	printf("Kac Gun Kosuyor:");
	scanf("%d",&a);
	
	for(j=1;j<=a;j++){
		
		printf("%d.Gun: %d\n",j,adim(j));        //Her G�n� Teker Teker Ald�k Yukar�dan Hesaplatt�k sonra yazd�rd�k
		b = b + adim(j);
		
	}
	
	printf("\nToplam %d Ad�m Att�.",b);
	
}











