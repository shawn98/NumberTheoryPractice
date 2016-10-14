// coding style: GNU
#include <stdio.h>
#include <unistd.h>

void print_space(int count);
void print_star(int count_2);

int main() {
  for (int n = 0; n < 3; n++) {
    printf("\n");
  }

  for (int n = 1; n <= 13; n++) {
    if (n < 4) {
      print_space(10 - 2 * n);
      print_star(5 + 4 * (n - 1));
      print_space(9 - 4 * (n - 1));
      print_star(5 + 4 * (n - 1));
      printf("\n");
    }
    if (n >= 4 && n < 7) {
      print_space(3);
      print_star(29);
      printf("\n");
    }
    if (n >= 7) {
      print_space(4 + 2 * (n - 7));
      print_star(27 - 4 * (n - 7));
      printf("\n");
    }

    usleep(140000);
  }
  print_space(17);
  print_star(1);

  printf("\n");
  printf("\n");

  return 0;
}

void print_space(int count) {
  if (count > 0) {
    printf(" ");
    print_space(--count);
  }
}

void print_star(int count_2) {
  if (count_2 > 0) {
    printf("*");
    print_star(--count_2);
  }
}
