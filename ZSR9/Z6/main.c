#include <stdio.h>
#include <string.h>

char *popuni_lijevo (char* str, int n)
{
	int duzinaStringa = strlen(str);
	if(duzinaStringa > n || duzinaStringa == n) return str;
	char *pomocni = str;
	while(*str != '\0') str++;
	for(int i = 0; i < n - duzinaStringa ; i++) {
		if(i == (n - duzinaStringa) ) *str = '\0';
		else *str = ' ';
		str++;
	}
	str = pomocni;
	for(int i = 0; i < duzinaStringa; i++) {
		str[(n-duzinaStringa-1) + (i + 1)] = str[i];
		str[i] = ' ';
	}
	str = pomocni;
	return str;
}

char *popuni_desno (char* str, int n)
{
	int duzinaStringa = strlen(str);
	if(duzinaStringa > n || duzinaStringa == n) return str;
	char *pomocni = str;
	while(*str != '\0') str++;
	for(int i = 0; i < n - duzinaStringa; i++) {
		if(i == (n - duzinaStringa)) *str = '\0';
		else *str = ' ';
		str++;
	}
	str = pomocni;
	return str;
}

int main()
{
	char n1[100] = "Bosna", n2[100] = "Hercegovina";
	char *p1 = popuni_lijevo(n1, 15);
	char *p2 = popuni_desno(n2, 15);
	printf ("'%s'\n'%s'", p1, p2);
	return 0;
}
