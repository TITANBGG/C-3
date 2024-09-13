#include <stdio.h>

int maliyet(int n) {
	if(n==0) return 2000;
	return maliyet(n-1)+maliyet(n-1)*0.1+100;
}

int main () {
	int kat;
	
	printf("Kat sayisi girin:");
	scanf("%d", &kat);
	
	printf("Maliyet: %d", maliyet(kat));
	
	return 0;
}
