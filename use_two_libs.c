#include <stdio.h>
#include <stdlib.h>

#include <mult_nums.h>

int main(int argc, char** argv) {
  printf("%d\n", mult_nums(atoi(argv[1]), atoi(argv[2])));
  return 0;
}
