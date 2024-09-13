#include<stdio.h>


int fibo(int x){
	if(x == 0 || x == 1){
		
		return 1;
		
		}
	else return fibo(x-1) + fibo(x-2);
	}

int main(){
	
	int a;
	int j;
	
	printf("Kaç Kez Tekrar Etsin:");
	scanf("%d",&a);
	
	for(j=0;j<=a;j++){
		
		
		printf("%d ",fibo(j));
		
	}	
}


