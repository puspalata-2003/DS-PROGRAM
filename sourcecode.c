// C program that prints its source code.
#include<stdio.h>
int main(void)
{
    char c; 
    FILE *fp = fopen(__FILE__, "r");
  
    do
    {
        c = fgetc(fp);
        putchar(c);
    }
    while (c != EOF);
  
    fclose(fp);
  
    return 0;
}