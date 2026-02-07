void mx_printchar(char c);

static void print_front_side(int n, int i) {
  for (int tri1 = 0; tri1 < n - i; tri1++) {
    mx_printchar(' ');
  }
  mx_printchar('/');
  int cap = i * 2 - 1;
  for (int tri2 = 2; tri2 < cap; tri2++) {
    if (i == 2 && i != n) {
      mx_printchar(' ');
      continue;
    }
    if (i == n) {
      mx_printchar('_');
      continue;
    }
    mx_printchar(' ');
  }
  mx_printchar('\\');
}

static void print_side_side(int n, int i) {
  for (int tri3 = 0; tri3 < i - 1; tri3++) {
    if (i == 1)
      continue;
    if (i > n / 2) {
      if (tri3 < n - i)
        mx_printchar(' ');
      else {
        mx_printchar('|');
        break;
      }
    } else {
      mx_printchar(' ');
    }
  }
}

void mx_pyramid(int n) {
  if (n > 1 && n % 2 == 0)
    for (int i = 1; i <= n; i++) {
      print_front_side(n, i);

      print_side_side(n, i);

      if (i != 1 && i <= n / 2)
        mx_printchar(' ');
      mx_printchar('\n');
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