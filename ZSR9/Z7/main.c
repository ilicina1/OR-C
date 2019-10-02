#include <stdio.h>

int je_li_palindrom( char* str)
{
	char *pomocni = str;
	while(*str != '\0') str++;
	str--;
	while(*pomocni != '\0') {
		 //printf("\n%c", *str);
		 //printf("\n%c", *pomocni);
		if(((*pomocni >= 'A' && *pomocni <= 'Z') && (*str >= 'A' && *str <= 'Z')) && *pomocni != *str) return 0;
		if((*pomocni < 'A' || *pomocni > 'Z') && (*pomocni < 'a' || *pomocni > 'z')) {
			pomocni++;
		} else if((*str < 'A' || *str > 'Z') && (*str < 'a' || *str > 'z')) {
			str--;
		} else {
			pomocni++;
			str--;
		}
	}
	return 1;

}

int main()
{
	printf ("%d", je_li_palindrom("k   a   pa   a k"));
	return 0;
}
