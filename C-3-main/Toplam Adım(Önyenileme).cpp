#include<stdio.h>

int adim(int x){
	
	if (x == 0 || x == 1) {
	return 4000;                                     // Burasý ilk gün 4000 adým attýðý için koþulda ilk yerleri yazdýk 
}
	else return adim(x-1) + adim(x-1)*0.1;    // Burda toplamanýn sað tarafýnda %10 u alýp üstüne ekledik
	
}


int main(){
	
	int a,b;
	int j;
	
	printf("Kac Gun Kosuyor:");
	scanf("%d",&a);
	
	for(j=1;j<=a;j++){
		
		printf("%d.Gun: %d\n",j,adim(j));        //Her Günü Teker Teker Aldýk Yukarýdan Hesaplattýk sonra yazdýrdýk
		b = b + adim(j);
		
	}
	
	printf("\nToplam %d Adým Attý.",b);
	
}











