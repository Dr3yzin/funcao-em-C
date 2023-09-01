#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int contar(char a[], char b){
	int r, c=0;
	
	for(r=0; a[r] != '\0'; r++){
		if(a[r] == b){
			c++;
		}
		
	}
	return c;
	
}

main() {
system("color A");
setlocale(LC_ALL,"Portuguese");
	char a[100], b;
	
	printf("Digite uma palavra:\n");
	scanf("%s",&a);
	system("cls");
	
	printf("Digite uma letra: ");
	scanf(" %c",&b);
	system("cls");
	
	printf("A letra '%c' aparece %i vezes na palavra '%s'", b, contar(a, b), a);


}
