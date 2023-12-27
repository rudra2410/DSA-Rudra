#include <stdio.h>
#include <string.h>

int Accesindex(char* str,int x )
{
    return str[x];
}

int main()
{
    char str[] = "RUDRA";
    int x = 2;
    printf("%c\n",Accesindex(str,x));
}