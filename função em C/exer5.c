#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void filtrar(int l, int a[], int n){
	int r, p=0, b[l];
	
	for(r=0; r<l; r++){
		
		printf("Digite o %i° número: ", r+1);
		scanf("%i",&a[r]);
		
		if(a[r] <= n){
			
			b[p] = a[r];
			p++;
			
		}
	}
	system("cls");
	
	
	for(r=0; r<p; r++){
		printf("%i\n", b[r]);
	}
	

}

main() {
system("color A");
setlocale(LC_ALL,"Portuguese");
	int l, r, n;
	
	printf("Quantos números serão digitados?\n");
	scanf("%i",&l);
	system("cls");
	
	printf("Defina um valor máximo para os números digitados:\n");
	scanf("%i",&n);
	
	int a[l];
	
	filtrar(l, a, n);


}
