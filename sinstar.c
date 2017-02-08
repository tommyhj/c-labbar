#include <stdio.h>
#include <math.h>
int main ()
{
    int sine;
    double stars;
    double sinput;
    for (;;) {
      printf("Ange värdet av x:\n");
      scanf("%lf", &sinput);
      stars = sin(sinput);
      printf("%lf\n", stars );
      int i;
      for (i = 1; i <= 30+15*stars; i = i + 1)
      putchar ('*');
      putchar ('\n');
      printf("%d", i);
    }

    return 0;
}
