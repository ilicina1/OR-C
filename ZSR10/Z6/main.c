#include <stdio.h>
#include <string.h>
#include <ctype.h>

char* zamijeni_tekst(char* str, const char *sta, const char *sa_cim, int cs)
{
	int b = 0;
	if(cs == 1) {
		if(strlen(sta) == strlen(sa_cim)) {
			while (*str != '\0') {
				char* p = str;
				const char* q = sta;
				const char *r = sa_cim;
				while (*p == *q) {
					p++;
					q++;
					if (*q == '\0') {
						q = sta;
						while(b < strlen(sta)) {
							*str = *sa_cim;
							str++;
							sa_cim++;
							b++;
						}
						b = 0;
						sa_cim = r;
						// return str;
					}
				}
				str++;
			}
		} else if (strlen(sta) > strlen(sa_cim)) {
			char *pomocni = str;
			while (*str != '\0') {
				char* p = str;
				const char* q = sta;
				const char *r = sa_cim;
				while (*p == *q) {
					p++;
					q++;
					if (*q == '\0') {
						q = sta;
						while(b < strlen(sa_cim)) {
							*str = *sa_cim;
							str++;
							sa_cim++;
							b++;
						}
						b = 0;
						sa_cim = r;
						// return str;
						p = str;
						p++;
						p++;
						//printf("%c\n",*str);
						while(*str != '\0') {
							//printf("%c--%c\n",*str,*p);
							*str = *p;
							str++;
							p++;
						}
						//for(int i = 0; i < strlen(sta) - strlen(sa_cim); i++) pomocni++;
					}
				}
				str = pomocni;
				//if(*str == '\0') break;
				str++;
				pomocni++;
				//printf("'%c -- %c'\n", *str,*q);
			}
		}
	} else if (cs == 0) {
		if(strlen(sta) == strlen(sa_cim)) {
			while (*str != '\0') {
				char *p = str;
				const char *q = sta;
				const char *r = sa_cim;
				while (tolower(*p) == tolower(*q)) {
					p++;
					q++;
					if (*q == '\0') {
						q = sta;
						while(b < strlen(sta)) {
							*str = *sa_cim;
							str++;
							sa_cim++;
							b++;
						}
						b = 0;
						sa_cim = r;
						//return str;
					}
				}
				str++;
			}
		} else if (strlen(sta) > strlen(sa_cim)) {
			char *pomocni = str;
			while (*str != '\0') {
				char* p = str;
				const char* q = sta;
				const char *r = sa_cim;
				while (tolower(*p) == tolower(*q)) {
					p++;
					q++;
					if (*q == '\0') {
						q = sta;
						while(b < strlen(sa_cim)) {
							*str = *sa_cim;
							str++;
							sa_cim++;
							b++;
						}
						b = 0;
						sa_cim = r;
						// return str;
						p = str;
						p++;
						p++;
						//printf("%c\n",*str);
						while(*str != '\0') {
							//printf("%c--%c\n",*str,*p);
							*str = *p;
							str++;
							p++;
						}
						//for(int i = 0; i < strlen(sta) - strlen(sa_cim); i++) pomocni++;
					}
				}
				str = pomocni;
				//if(*str == '\0') break;
				//str++;
				pomocni++;
				//printf("'%c -- %c'\n", *str,*q);
			}
		}
		//printf("%d", strlen(str));
		//return str;
	}

	return str;
}
int main()
{
	// char tekst[100] = "  Zeko   pije   CAJ.  Pije caj mali zeko!";
	// zamijeni_tekst (tekst, "caj", "l", 1); //cs = 0
	// printf ("'%s'", tekst);
	char tekst[100] = "nananananananana batmaaaan";
	zamijeni_tekst (tekst, "an", "x", 1); //cs = 0
	printf ("'%s'", tekst);
	return 0;
}
