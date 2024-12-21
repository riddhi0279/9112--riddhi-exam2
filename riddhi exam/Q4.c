
/* Q4. WAP to Pattern using nested for loop

8 7 6 5 4 3 2 1
8 7 6 5 4 3 2
8 7 6 5 4 3
8 7 6 5 4
8 7 6 5
8 7 6
8 7 
8 */

#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1 ; i <=8  ; i++)
    {
        for (j = 8; j >= i; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}
