#include <stdio.h>
#include <string.h>

void ispisi_unazad (const char *str)
{
	int i;
	for(i = strlen(str) - 1; i >= 0; i--) {
		printf("%c", str[i]);
	}
}

int main()
{
	const char* s="kajldeP dajiR";
	ispisi_unazad(s);
	return 0;
}

