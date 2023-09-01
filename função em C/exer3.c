#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void consoante(char a[]){
	int r, i=0;
	char c[100];
	
	for(r=0; a[r] != '\0'; r++){
		
		if(a[r] != 'A' && a[r] != 'a' && a[r] != 'E' && a[r] != 'e' && a[r] != 'I' && a[r] != 'i' && a[r] != 'O' && a[r] != 'o' && a[r] != 'U' && a[r] != 'u'){
			
			c[i]=a[r];
			i++;
			
		}
		 
	}
	
	printf("%s",c);
	
}

main() {
system("color A");
setlocale(LC_ALL,"Portuguese");
	char a[100];
	
	printf("Digite uma palavra:\n");
	scanf("%s",&a);
	system("cls");
	
	consoante(a);




}
