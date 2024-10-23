#include <stdio.h>
#include <string.h>

int main(){
	char string1[20] = "Pedro Luiz ";
	char string2[] = "Mendes";
	
	strcat(string1, string2);
	printf("Nome do autor: %s\n ", string1);





	return 0;
}
