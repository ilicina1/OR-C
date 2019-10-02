#include <stdio.h>
#include <math.h>

void sekunde2hms(int s, int *H, int *M, int *S)
{
    *S = s % 60;
    double m = s / 60;
    m = fmod(m,60);
    *M = m;
    *H = s / 3600;;
}
int main()
{
    int H, M, S;
    int s = 3665;
    sekunde2hms(s, &H, &M, &S);
    printf ("%02d:%02d:%02d", H, M, S); //ispisuje: „01:01:05“
    return 0;
}
