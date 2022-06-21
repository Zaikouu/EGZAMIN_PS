#include <stdio.h>
#include <stdlib.h>
/*Napisz funkcję, której argumentem jest dwuwymiarowa tablica tablic typu int i jej wymiary n i m.
Funkcja ma zwrócić różnicę między największym a najmniejszym elementem tablicy. Stwórz przypadek
testowy.*/

int **rezerwacja(int n, int m)
{
    int **tab=(int**)malloc(sizeof(int*)*n);
    for(int i=0;i<n;i++)
    {
        *(tab+i)=(int*)malloc(sizeof(int)*m);
    }
    return tab;
}
int roznica(int **tab,int n,int m)
{
    int min=**tab;
    int max=**tab;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(*(*(tab+i)+j)<min)
                min=*(*(tab+i)+j);
            if(*(*(tab+i)+j)>max)
                max=*(*(tab+i)+j);
        }
    }
    return max-min;
}
int main()
{
    int n=2;
    int m=2;
    int **tab1=rezerwacja(n,m);
    **tab1=2;
    *(*(tab1)+1)=5;
    *(*(tab1+1))=9;
    *(*(tab1+1)+1)=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            printf("%d\n",*(*(tab1+i)+j));
    }
    printf("%d\n",roznica(tab1, n, m));
    return 0;
}
