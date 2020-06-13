#include <stdio.h>
FILE *b;
int main()
{
    b=fopen("Bappi.txt","w");
    int a=100;
    fscanf(a,"w");
    fprintf(a,"r");

    fclose(b);

    return 0;
}
