#include <stdio.h>
int main()
{
  printf("Les premiers termes de la série de Fibonacci sont:\n");

  unsigned long long nbr1 = 0, nbr2 = 1, suivant, i, n = 10000000;
  for (i = 0; i < n; i++)
  {
    if (i <= 1)
    suivant = i;
    else
    {
      suivant = nbr1 + nbr2;
      nbr1 = nbr2;
      nbr2 = suivant;
    }
    //printf("%llu\n", suivant);
  }

  return 0;
}
