#include <stdio.h>

char* velika(char *s)
{
	int i = 0;
	for(;;) {
		if(s[i] == '\0') break;
		if(s[i] != ' ' && s[i] == 'a') s[i] = 'A';
		if(s[i] != ' ' && s[i] == 'b') s[i] = 'B';
		if(s[i] != ' ' && s[i] == 'c') s[i] = 'C';
		if(s[i] != ' ' && s[i] == 'd') s[i] = 'D';
		if(s[i] != ' ' && s[i] == 'e') s[i] = 'E';
		if(s[i] != ' ' && s[i] == 'f') s[i] = 'F';
		if(s[i] != ' ' && s[i] == 'g') s[i] = 'G';
		if(s[i] != ' ' && s[i] == 'h') s[i] = 'H';
		if(s[i] != ' ' && s[i] == 'i') s[i] = 'I';
		if(s[i] != ' ' && s[i] == 'j') s[i] = 'J';
		if(s[i] != ' ' && s[i] == 'k') s[i] = 'K';
		if(s[i] != ' ' && s[i] == 'l') s[i] = 'L';
		if(s[i] != ' ' && s[i] == 'm') s[i] = 'M';
		if(s[i] != ' ' && s[i] == 'n') s[i] = 'N';
		if(s[i] != ' ' && s[i] == 'o') s[i] = 'O';
		if(s[i] != ' ' && s[i] == 'p') s[i] = 'P';
		if(s[i] != ' ' && s[i] == 'q') s[i] = 'Q';
		if(s[i] != ' ' && s[i] == 'r') s[i] = 'R';
		if(s[i] != ' ' && s[i] == 's') s[i] = 'S';
		if(s[i] != ' ' && s[i] == 't') s[i] = 'T';
		if(s[i] != ' ' && s[i] == 'u') s[i] = 'U';
		if(s[i] != ' ' && s[i] == 'v') s[i] = 'V';
		if(s[i] != ' ' && s[i] == 'w') s[i] = 'W';
		if(s[i] != ' ' && s[i] == 'x') s[i] = 'X';
		if(s[i] != ' ' && s[i] == 'y') s[i] = 'Y';
		if(s[i] != ' ' && s[i] == 'z') s[i] = 'Z';
		i++;
	}
	return s;
}

int main()
{
	char s[1000];
	printf("Unesite neki tekst: ");
	//scanf("%s", s);
	char z;
	int i = 0;
	while(z != '\n'){
		z = getchar();
		s[i] = z;
		i++;
	}
	s[i] = '\0';
	velika(s);
	int j = 0;
	while(s[j] != '\0'){
		printf("%c", s[j]);
		j++;
	}
	return 0;
}
