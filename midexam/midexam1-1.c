#include <stdio.h>

int main() {

  int n, b, q, i, l, p;

  scanf("%d", &n);

  for (b = 1; b <= n; b++) {

    for (p = 1; p <= b * 2; p++) {
      q = p;
      while (q < 2 * n) {
        printf(" ");
        q++;
      }

      for (i = 1; i <= p * 2; i++) {
        if (p == b * 2 || p == 0 || p == 1) {
          printf("^");
        } else {
          if (i == p || i == p * 2 || i == 1 || i == p + 1) {
            printf("^");
          } else {
            printf(" ");
          }
        }
      }
      printf("\n");
    }
  }
  return 0;
}