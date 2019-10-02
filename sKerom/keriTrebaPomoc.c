#include <stdio.h>
#include <string.h>

struct Grad {
    char naziv[20];
    int br_stanovnika;
};

struct Drzava {
    char naziv[50];
    struct Grad glavni;
};


int funkcija(struct Grad gradovi[],int velicina)
{
    int i=0,j;
    int p=0;
    int jednaki;
    int vel = 0;
    int a;
    int k;

    for(i = 0 ; i<velicina ; i++) {
        jednaki = 0;
        for(j = i+1 ; j < velicina ; j++) {
            if(strlen(gradovi[i].naziv) == strlen(gradovi[j].naziv)) {
                for(p = 0 ; p<strlen(gradovi[j].naziv) ; p++) {
                    if(gradovi[i].naziv[p] == gradovi[j].naziv[p]) {
                        jednaki = 1;
                    } else {
                        jednaki = 0;
                        break;
                    }
                }
            }

            //  if(jednaki == 1){
            //     for(k = j ; k<velicina-1 ; k++){
            //         gradovi[k] = gradovi[k+1];
            //     }
            //     velicina--;
            // //    j--;
            // }

            if(jednaki == 1) {
                printf("%s 00\n", gradovi[j].naziv);
                //Grad pom = gradovi[velicina-1];
                gradovi[j] = gradovi[velicina-1];
                velicina--;

            }


        }
    }




    return velicina;
}

int main()
{

    struct Grad gradovi[6] = {
        {"Sarajevo"},
        {"Beograd"},
        {"Zagreb"},
        {"Budimpesta"},
        {"Sarajevo"},
        {"Moskvaaa"}
    };

    int vel = funkcija(gradovi,6);

    for(int i=0 ; i<vel ; i++) {
        printf("%s\n",gradovi[i].naziv);
    }


    // struct Drzava drzave[4] = {
    //     {"Bosna","Sarajevo"},
    //     {"Srbija","Beograd"},
    //     {"Hrvatska","Sarajevo"},
    //     {"SAD","Washington"}

    // };

    // int vel = funkcija(drzave,4);





}
