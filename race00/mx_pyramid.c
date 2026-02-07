#include <stdio.h>
void mx_printchar(char c);

void mx_pyramid(int n) {
  if (n > 1 && n % 2 == 0)
    for (int i = 1; i <= n; i++) {

      for (int tri1 = 0; tri1 < n - i; tri1++) {
        printf(" ");
      }
      printf("/");
      int cap = i * 2 - 1;
      for (int tri2 = 2; tri2 < cap; tri2++) {
        if (i == 2 && i != n) {
          printf(" ");
          continue;
        }
        if (i == n) {
          printf("_");
          continue;
        }
        printf(" ");
      }
      printf("\\");

      for (int tri3 = 0; tri3 < i - 1; tri3++) {
        if (i == 1)
          continue;
        if (i > n / 2) {
          if (tri3 < n / 2 - i / 2)
            printf(" ");
          else {
            printf("|");
            break;
          }
        }
        printf(" ");
      }
      if (i != 1 && i <= n / 2)
        printf("\\");
      printf("\n");
    }
}

/*
./mx_pyramid | cat-e # for n = 2

 /\$
/_\|$

./mx_pyramid | cat-e # for n = 4

   /\$
  / \ \$
 /   \ |$
/_____\|$

*/