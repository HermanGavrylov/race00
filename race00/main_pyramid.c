void mx_pyramid(int n);

int main(int argc, char **argv) {
  if (argc > 1)
    mx_pyramid((int)argv[1][0] - '0');
  else
    mx_pyramid(42);
  return 0;
}