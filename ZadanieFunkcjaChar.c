#include <stdio.h>
#include <stdlib.h>
/*Dane są następujące wyrazy i znaki:
char char char * * * ( ) napis1 napis2 , foo
Ułóż je we właściwej kolejności, aby otrzymać nagłówek funkcji foo, która dostaje jako argumenty dwa napisy
oraz zwraca wskaźnik na char. Następnie dodaj dowolną implementację funkcji i stwórz dla niej przypadek
testowy*/

char *foo(char *napis1, char *napis2);
int main()
{
    char *napis1=(char*)malloc(sizeof(char)*40);
    char *napis2="Programowanie Strukturalne";
    foo(napis1,napis2);
    printf("Napis nr1: %s\n",napis1);
    printf("Napis nr2: %s\n",napis2);
    return 0;
}
char* foo(char *napis1, char *napis2)
{
    char *p=napis1;
    while(*napis2!='\0')
    {
        *napis1++=*napis2++;
    }
    *napis1=0;
    return p;
}
