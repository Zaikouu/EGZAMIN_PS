#include<stdio.h>
#include<stdlib.h>
int foo_szescian(int n)
{
    if (n<=0)
    {
        return 0;
    }
    return (n*n*n)+foo_szescian(n-1);
}
int main()
{
    int a=2;
    int b=4;
    printf("%d\n",foo_szescian(a));
    printf("%d\n",foo_szescian(b));
    return 0;
}
