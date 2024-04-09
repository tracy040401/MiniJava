/*
class Test {
  public static void main(String[] args) {
    System.out.println(new TestFor().run());
  }
}
class TestFor {
  public int run() {
    int i;
    int j;
    j = 0;
    for (i=0; i < 10; i=i + 1) {
      j = 42;
    }
    return j;
  }
}*/
#include <stdio.h>
#include <stdlib.h>
#include "tgc.h"
#pragma GCC diagnostic ignored "-Wpointer-to-int-cast"
#pragma GCC diagnostic ignored "-Wint-to-pointer-cast"
struct array { int* array; int length; };
tgc_t gc;
struct TestFor;
void* TestFor_run(struct TestFor* this);
struct TestFor {
  void* (**vtable)();
};
void* (*TestFor_vtable[])() = { TestFor_run };
void* TestFor_run(struct TestFor* this) {
  int i;
  int j;
  j = 0;
  for (i=0; (i < 10); i=(i + 1)) {
    j = 42;
  }
  return (void*)(j);
}
int main(int argc, char *argv[]) {
  tgc_start(&gc, &argc);
  printf("%d\n", ({ struct TestFor* tmp1 = ({ struct TestFor* res = tgc_calloc(({ extern tgc_t gc; &gc; }), 1, sizeof(*res)); res->vtable = TestFor_vtable; res; }); (int) tmp1->vtable[0](tmp1); }));
  tgc_stop(&gc);

  return 0;
}
