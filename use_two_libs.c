#include <stdio.h>
#include <stdlib.h>

#include <mult_nums.h>
#include <better_atoi.h>

int main(int argc, char** argv) {
  printf("%d\n", mult_nums(
        better_atoi(argv[1]),
        better_atoi(argv[2])));
  return 0;
}
