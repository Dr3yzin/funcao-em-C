#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int contar(char a[]){
	int r=0;
	
	while(a[r] != '\0'){
		r++;
	}
		
	return r;
}

void inverter(char a[], int r){
	
	while(r >= 0){
		printf("%c",a[r]);
		r--;
	}
	
	
}

main() {
system("color A");
setlocale(LC_ALL,"Portuguese");

	char a[100];

	printf("Digite uma palavra:\n");
	scanf("%s",&a);
	system("cls");

	inverter(a, contar(a));

}
