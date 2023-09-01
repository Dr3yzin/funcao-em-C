#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int contar(int n, int a[]){
	int r, p=0;
	
	for(r=0; r<n; r++){
		
		printf("Digite o %i° número: ", r+1);
		scanf("%i",&a[r]);
		
		if(a[r]%2 == 0){
			
			p += a[r];
			
		}
	}
	
	system("cls");
	
	
	return p;
}

main() {
system("color A");
setlocale(LC_ALL,"Portuguese");
	int n;
	
	printf("Quantos números serão digitados?\n");
	scanf("%i",&n);
	system("cls");
	
	int a[n];



	
	printf("A soma dos pares digitados é %i", contar(n, a));
}
