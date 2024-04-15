/*
class TestFloat {
  public static void main(String[] args) {
    if (1 == 1) System.out.println(42.200000);
    else System.out.println(0.100000);
  }
}
*/
#include <stdio.h>
#include <stdlib.h>
#include "tgc.h"
#pragma GCC diagnostic ignored "-Wpointer-to-int-cast"
#pragma GCC diagnostic ignored "-Wint-to-pointer-cast"
struct array { int* array; int length; };
tgc_t gc;
int main(int argc, char *argv[]) {
  tgc_start(&gc, &argc);
  if ((1 == 1)) printf("%f\n", 42.200000);
  else printf("%f\n", 0.100000);
  tgc_stop(&gc);

  return 0;
}
