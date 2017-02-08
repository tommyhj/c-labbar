#include <stdio.h>
int main ()
{
    int stars;
    printf("Ange hur många stjärnor som ska skrivas ut:\n");
    scanf("%d", &stars);
    int i;
    for (i = 1; i <= stars; i = i + 1)
    	putchar ('*');
    putchar ('\n');
    return 0;
}
