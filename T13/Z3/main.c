#include <stdio.h>

void unesi(char niz[], int velicina)
{
    char znak = getchar();
    while (znak == '\n') znak=getchar();
    int i = 0;
    while (i < velicina-1 && znak != '\n') {
        niz[i] = znak;
        i++;
        znak = getchar();
    }
    niz[i]='\0';
}

int main()
{
    int a, parc1=0, parc2=0, i;
    char ime[100]="";
    char prezime[100]="";
    char velkistring[1000]="";
    FILE *gg=NULL;
    do {
        printf("Unesite 1 za unos, 2 za ispis, 0 za izlaz: ");
        scanf("%d", &a);
        if(a==1) {
            printf("Unesite ime: ");
            unesi(ime, 20);
            printf("Unesite prezime: ");
            unesi(prezime, 20);
            printf("Unesite broj bodova na I parcijalnom: ");
            scanf("%d", &parc1);
            printf("Unesite broj bodova na II parcijalnom: ");
            scanf("%d", &parc2);
            gg=fopen("ispit.txt", "a+");
            if(gg==NULL)return 0;
            fprintf(gg, "%-20s", prezime);
            fprintf(gg, "%-15s%2d %2d\n", ime, parc1, parc2);
            fclose(gg);
        }
        if(a==2) {
            int h=0;
            gg=fopen("ispit.txt", "r");
            if(gg==NULL)return 0;
            int n=48;
            int ima=1;
            while(ima) {

                int o=0;
                do {
                    n=fgetc(gg);
                    if(n==EOF) {
                        velkistring[o]='\0';
                        ima=0;
                        break;
                    }
                    if(n!='\n') {
                        velkistring[o]=n;
                        o++;
                    } else {
                        velkistring[o]='\0';
                    }
                } while(n!='\n');
                if(ima==0)break;
                printf("\n%d. ", ++h);
                int im=0;
                int brojac1=0, brojac2=0;
                parc1=0;
                parc2=0;
                for(i=0; i<o; i++) {
                    if(velkistring[i]!=' ') {
                        if(i!=0) {
                            if(velkistring[i-1]==' ') {
                                if(im==0) {
                                    prezime[brojac1]='\0';
                                    im++;
                                } else if(im==1) {
                                    ime[brojac2]='\0';
                                    im++;
                                } else if(im==2) {
                                    im++;
                                }
                            }
                        }
                        if(im==0) {
                            prezime[brojac1]=velkistring[i];
                            prezime[brojac1+1]='\0';
                            brojac1++;
                        }
                        if(im==1) {
                            ime[brojac2]=velkistring[i];
                            ime[brojac2+1]='\0';
                            brojac2++;
                        }
                        if(im==2) {
                            parc1=parc1*10+velkistring[i]-48;
                        }
                        if(im==3) {
                            parc2=parc2*10+velkistring[i]-48;
                        }
                    }
                }
                printf("%s ", ime);
                printf("%s - %d, %d\n", prezime, parc1, parc2);
            }
            fclose(gg);
        }
    } while(a!=0);

    return 0;
}
