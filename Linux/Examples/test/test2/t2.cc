int f(int a) { return a+4; }
int g(int a) { return a+9; }

int bar() {
  int * arr = NULL;
  arr = new int[5];
  *(arr+3)=2;
  delete[] arr;
  return 10; 
}

int foo(int a, int * b, int c, int d, int * e) {
  if (f(a) < g(c)) {
    println(0);
  } else {}

  if (f(a) > g(c)) {
    println(1);
  } else {}

  if (f(a) == g(c)) {
    println(2);
  } else {}

  if (f(a) != g(c)) {
    println(3);
  } else {}

  if (f(a) <= g(c)) {
    println(4);
  } else {}

  if (f(a) >= g(c)) {
    println(5);
  } else {}

  *(b+bar()) = bar();
  return a + *(b+10) + c + d + *e;
}

int wain(int a, int b){
  int * arr = NULL;
  arr = new int[40];
  return foo(a, arr, a, b, &a);
}
