#include <stdio.h>

/* copy input to output; 1st version */
main()
{
    int c;
    int d;
  
    d = (getchar() != EOF);
    c = getchar();
    while (c != EOF)
        {
            putchar(c);
            printf(d);
            c = getchar();
        }
}