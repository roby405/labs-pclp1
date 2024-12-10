#include <stdio.h>
#include <math.h>

float dist(int x1, int y1, int x2, int y2) {
  float d = sqrt(((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1-y2)));
  return d;
}

int main() {
  int a[100][2];
  int n;
  scanf("%d", &n);
  for (int i = 0; i<n; i++) {
    scanf("%d%d", &a[i][0], &a[i][1]);
  }
  float distMax = 0;
  int x1, y1, x2, y2;
  for (int i = 0; i<n-1; i++) {
    for (int j = i+1; j<n; j++) {
      if (dist(a[i][0], a[i][1], a[j][0], a[j][1])>distMax)
        distMax= dist(a[i][0], a[i][1], a[j][0], a[j][1]);
        x1 = a[i][0];
        y1 = a[i][1];
        x2 = a[j][0];
        y2 = a[j][1];
    }
  }
  printf("%d %d\n%d %d\n%f",x1, y1, x2, y2, distMax);
}