#include <stdio.h>
#include <stdlib.h>

struct Pociag{
    char *model;
    int liczba_wagonow;
    int liczba_pasazerow;
};
int sumaPasazerow(struct Pociag *tab, int n)
{
    int suma=0;
    for(int i=0;i<n;i++)
    {
        suma+=tab[i].liczba_pasazerow;
    }
    return suma;
}
int main()
{
    struct Pociag pociag1={"ET21", 4, 146};
    struct Pociag pociag2={"ET42", 5, 199};
    struct Pociag pociag3={"EU07", 3, 112};
    struct Pociag tab[3]={pociag1, pociag2, pociag3};
    printf("%d", sumaPasazerow(tab, 3));
    return 0;
}
