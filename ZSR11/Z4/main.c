#include <stdio.h>
#include <stdbool.h>

struct Tacka {
    int x,y;
};

struct Cetverougao {
    struct Tacka A,B,C,D;
};

// Funkcije za unos
struct Tacka unos_tacke()
{
    struct Tacka t;
    printf("Unesite koordinate (x,y): ");
    scanf("%d %d", &t.x, &t.y);
    return t;
}

struct Cetverougao unos_cetverougla()
{
    struct Cetverougao k;
    printf("Unesite koordinate tacke A: ");
    scanf("%d %d", &k.A.x, &k.A.y);
    printf("Unesite koordinate tacke B: ");
    scanf("%d %d", &k.B.x, &k.B.y);
    printf("Unesite koordinate tacke C: ");
    scanf("%d %d", &k.C.x, &k.C.y);
    printf("Unesite koordinate tacke D: ");
    scanf("%d %d", &k.D.x, &k.D.y);
    return k;
}

// Funkcije za provjeru
bool pravougaonik(struct Cetverougao k)
{
    if(k.A.y > k.B.y) {
        if(k.A.x == k.B.x) {
            if(k.A.x > k.C.x) {
                if((k.A.y - k.B.y) != (k.A.x - k.C.x)) return true;
                // else return false;
            } else {
                if((k.A.y - k.B.y) != (k.C.x - k.A.x)) return true;
                // else return false;
            }
        }
    } else if(k.B.y > k.A.y) {
        if(k.B.x == k.A.x) {
            if(k.B.x > k.C.x) {
                if((k.B.y - k.A.y) != (k.B.x - k.C.x)) return true;
                else return false;
            } else {
                if((k.B.y - k.A.y) != (k.C.x - k.B.x)) return true;
                // else return false;
            }
        }
    }
    if(k.A.y > k.B.y) {
        if(k.A.x > k.C.x) {
            if((k.A.y - k.B.y) == (k.A.x - k.C.x)) return true;
            else return false;
        } else {
            if((k.A.y - k.B.y) == (k.C.x - k.A.x)) return true;
            else return false;
        }
    } else if(k.B.y > k.A.y) {
        if(k.B.x == k.A.x) {
            if(k.B.x > k.C.x) {
                if((k.B.y - k.A.y) == (k.B.x - k.C.x)) return true;
                else return false;
            } else {
                if((k.B.y - k.A.y) == (k.C.x - k.B.x)) return true;
                else return false;
            }
        }
    }
    return false;
}

bool kvadrat(struct Cetverougao k)
{
    if(k.A.y > k.B.y) {
        if(k.A.x > k.C.x) {
            if((k.A.y - k.B.y) == (k.A.x - k.C.x)) return true;
            else return false;
        } else {
            if((k.A.y - k.B.y) == (k.C.x - k.A.x)) return true;
            else return false;
        }
    } else if(k.B.y > k.A.y) {
        if(k.B.x == k.A.x) {
            if(k.B.x > k.C.x) {
                if((k.B.y - k.A.y) == (k.B.x - k.C.x)) return true;
                else return false;
            } else {
                if((k.B.y - k.A.y) == (k.C.x - k.B.x)) return true;
                else return false;
            }
        }
    }
    return false;
}

bool tacka_u_cetverouglu(struct Tacka t, struct Cetverougao k)
{
    if((k.A.x < k.B.x) && (k.A.y == k.B.y) && (k.A.y > k.D.y)) {
        if(((t.x > k.A.x) && (t.x < k.B.x)) && ((t.y < k.A.y) && (t.x > k.D.y))) {
            return true;
        }
    } else if((k.A.x < k.B.x) && (k.A.y == k.B.y) && (k.A.y < k.D.y)) {
        if(((t.x > k.A.x) && (t.x < k.B.x)) && ((t.y > k.A.y) && (t.x < k.D.y))) {
            return true;
        }
    }

    if((k.B.x < k.A.x) && (k.B.y == k.A.y) && (k.B.y > k.D.y)) {
        if(((t.x > k.B.x) && (t.x < k.A.x)) && ((t.y < k.B.y) && (t.x > k.D.y))) {
            return true;
        }
    } else if((k.B.x < k.A.x) && (k.B.y == k.A.y) && (k.B.y < k.D.y)) {
        if(((t.x > k.B.x) && (t.x < k.A.x)) && ((t.y > k.B.y) && (t.x < k.D.y))) {
            return true;
        }
    }

    if((k.A.x < k.C.x) && (k.A.y == k.C.y) && (k.A.y < k.B.y)) {
        if(((t.x > k.A.x) && (t.x < k.C.x)) && ((t.y > k.A.y) && (t.x < k.B.y))) {
            return true;
        }
    } else if((k.A.x < k.C.x) && (k.A.y == k.C.y) && (k.A.y > k.B.y)) {
        if(((t.x > k.A.x) && (t.x < k.C.x)) && ((t.y < k.A.y) && (t.x > k.B.y))) {
            return true;
        }
    }

    return false;
}

void filtriraj_tacke(struct Tacka *t, int n, struct Cetverougao k)
{

}

void sortiraj_tacke(struct Tacka *t)
{

}

int main()
{
    struct Cetverougao c;
    c.A.x=1;
    c.A.y=1;
    c.B.x=1;
    c.B.y=3;
    c.C.x=3;
    c.C.y=1;
    c.D.x=3;
    c.D.y=3;
    printf("%d", kvadrat(c));
    printf("%d", pravougaonik(c));
    return 0;
}
