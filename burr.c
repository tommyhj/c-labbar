#include <stdio.h>
int main ()
{
    printf("Detta program räknar ut vilka tal som är burrtal, dvs. tal som innehåller en viss siffra eller är jämt delbar med den. Ange önskad burrsiffra:\n");
    int burrsiffra;
    scanf("%d", &burrsiffra);
    int j;
    for (j = 1; j < 100; j++){
    if (j % burrsiffra == 0){
      printf("burr ");}
    else if(j - 10 * (j / 10) == burrsiffra){
      printf("burr ");}
    else {
      printf("%d ", j);}


    }
    return 0;
}
