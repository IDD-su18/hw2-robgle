#define A {1, 1, 0, 0, 0, 0, 0, 0, 0, 0}
#define B {1, 0, 0, 1, 0, 0, 0, 0, 0, 0}
#define C {1, 0, 0, 0, 0, 1, 0, 0, 0, 0}
#define D {1, 0, 0, 0, 0, 0, 0, 1, 0, 0}
#define E {0, 0, 0, 0, 0, 0, 1, 1, 0, 0}
#define F {1, 0, 0, 0, 0, 0, 0, 0, 0, 1}
#define G {1, 0, 0, 0, 0, 0, 0, 0, 1, 0}
#define H {1, 0, 0, 0, 0, 0, 1, 0, 0, 0}
#define I {1, 0, 0, 0, 1, 0, 0, 0, 0, 0}
#define J {1, 0, 1, 0, 0, 0, 0, 0, 0, 0}
#define K {0, 1, 1, 0, 0, 0, 0, 0, 0, 0}
#define L {0, 0, 1, 1, 0, 0, 0, 0, 0, 0}
#define M {0, 0, 1, 0, 0, 1, 0, 0, 0, 0}
#define N {0, 0, 1, 0, 0, 0, 0, 1, 0, 0}
#define O {0, 0, 1, 0, 0, 0, 0, 0, 0, 1}
#define P {0, 0, 1, 0, 0, 0, 0, 0, 1, 0}
#define Q {0, 0, 1, 0, 0, 0, 1, 0, 0, 0}
#define R {0, 0, 1, 0, 1, 0, 0, 0, 0, 0}
#define S {0, 1, 0, 0, 1, 0, 0, 0, 0, 0}
#define T {0, 0, 0, 1, 1, 0, 0, 0, 0, 0}
#define U {0, 0, 0, 0, 1, 1, 0, 0, 0, 0}
#define V {0, 0, 0, 0, 1, 0, 0, 1, 0, 0}
#define W {0, 0, 0, 0, 1, 0, 0, 0, 0, 1}
#define X {0, 0, 0, 0, 1, 0, 0, 0, 1, 0}
#define Y {0, 0, 0, 0, 1, 0, 1, 0, 0, 0}
#define Z {0, 1, 0, 0, 0, 0, 1, 0, 0, 0}
#define SPC {0, 0, 0, 1, 0, 0, 1, 0, 0, 0}
#define DEL {0, 0, 0, 0, 0, 1, 1, 0, 0, 0}

#define CHARCNT 28

int charMatrix[][10] = {A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, V, W, X, Y, Z, SPC, DEL};

int arrcmp(int arr1[], int arr2[], int len) {
  int i;
  for (i = 0; i < len; i++) {
    if (arr1[i] != arr2[i])
      return 0;
  }
  return 1;
}

int toasc(int ch) {
  if (ch == 26)
    return 32;
  if (ch == 27)
    return 127;
  return ch + 65;
}

int getChar(int arr[]) {
  int i;
  for (i = 0; i < CHARCNT; i++) {
    if (arrcmp(arr, charMatrix[i], 10))
      return toasc(i);
  }
  return 0;
}
