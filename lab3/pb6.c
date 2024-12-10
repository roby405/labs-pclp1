#include <stdio.h>

int main() {
  int n, m;
  scanf("%d%d", &n, &m);
  
  // recurenta
  int combinari = 1;
  for (int k = 1; k<=m; k++)
    combinari = combinari * (n-k + 1) / k;
  printf("%d\n", combinari);

  // formula obisnuita
    // factorial
    int factorialn = 1;
    for (int i = 1; i<=n; i++)
      factorialn *= i;
        int factorialm = 1;
    for (int i = 1; i<=m; i++)
      factorialm *= i;
        int factorialnminusm = 1;
    for (int i = 1; i<=(n-m); i++)
      factorialnminusm *= i;
    printf("%d", factorialn/(factorialm*factorialnminusm));
}