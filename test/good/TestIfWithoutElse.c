/*
class TestIfWithoutElse {
  public static void main(String[] args) {
    if (1 == 1) System.out.println(42);
    else {
      
    }
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
  if ((1 == 1)) printf("%d\n", 42);
  else {
    
  }
  tgc_stop(&gc);

  return 0;
}
